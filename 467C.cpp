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

ll n, m, k;

void Input() {
	cin >> n >> m >> k;
}

void Solve() {
	vll a(n + 1, 0);
	for (ll i = 1; i <= n; i++) cin >> a[i];
	ll b[k + 1][n + 1], su[n + 1] = {0};
	for (ll i = 1; i <= n; i++) su[i] = su[i - 1] + a[i];
	memset(b, 0, sizeof b);
	for (ll i = 1; i <= k; i++) {
		for (ll j = 1; j <= n; j++) {
			if (j - i * m < 0)continue;
			b[i][j] = max(b[i][j - 1], b[i - 1][j - m] + su[j] - su[j - m]);
		}
	}
	cout << b[k][n];
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