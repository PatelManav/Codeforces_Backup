/*May The Force Be With Me*/
#include <bits/stdc++.h>
#include <stdio.h>
#include <ctype.h>
#pragma GCC optimize ("Ofast")
#define ll long long
#define MOD 1073741824
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

ll a, b, c;

void Input() {
	cin >> a >> b >> c;
}

void Solve() {
	ll ans = 0, dp[1000000 + 1] = {0};
	for (ll i = 1; i <= a; i++)for (ll j = 1; j <= b; j++)for (ll k = 1; k <= c; k++) {
				if (dp[i * j * k] > 0) {ans = (ans + dp[i * j * k]) % MOD; continue;}
				ll t = 0;
				for (ll p = 1; p * p <= i * j * k; p++) {
					if ((i * j * k) % p == 0) {
						t = (t + 1 ) % MOD;
						if ((i * j * k) / p != p)
							t = (t + 1) % MOD;
					}
				}
				dp[i * j * k] = t;
				ans = (ans + t) % MOD;
			}
	cout << ans;
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