/*May The Force Be With Me*/
#include <bits/stdc++.h>
#include <stdio.h>
#include <ctype.h>
#pragma GCC optimize ("Ofast")
#define ll long long
#define MOD 1000000007
#define endl "\n"
#define vll vector<long long>
#define mll map<long long,long long>
#define pll pair<long long, long long>
#define all(c) c.begin(),c.end()
#define rall(c) c.rbegin(),c.rend()
#define pb push_back
#define f first
#define s second
#define inf INT_MAX
#define size_1d 10000000
#define size_2d 1000
#define rep(i,v,n) for(ll i = v; i < n; i++)
//Snippets: delta, sieve, fastexp, dfs, bfs, dijkstra, floodfill

using namespace std;

ll n;

void Input() {
	cin >> n;
}

void Solve() {
	vll a(n), b(n);
	for (ll i = 0; i < n; i++) cin >> a[i];
	for (ll i = 0; i < n; i++) cin >> b[i];
	ll dp[3][n];
	memset(dp, inf, sizeof dp);
	// for (ll i = 0; i < 3; i++) for (ll j = 0; j < n; j++)dp[i][j] = inf;
	for (ll i = 0; i < n; i++)dp[0][i] = b[i];
	for (ll i = 1; i < 3; i++)for (ll j = 0; j < n; j++) {
			for (ll k = 0; k < j; k++) {
				if (a[k] < a[j])dp[i][j] = min(dp[i][j], dp[i - 1][k] + b[j]);
			}
		}
	ll ans = inf;
	for (ll i = 0; i < n; i++)ans = min(ans, dp[2][i]);
	if (ans == inf)cout << -1;
	else cout << ans;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll T = 1;
	//cin >> T;
	//ll t = 1;
	while (T--) {
		Input();
		//cout << "Case " << t << ": ";
		Solve();
		//t++;
	}
	return 0;
}