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

ll n, k, d;

void Input() {
	cin >> n >> k >> d;
}

void Solve() {
	ll dp[n + 1][2] = {0};
	dp[0][0] = 1;
	for (ll i = 1; i <= n; i++) {
		for (ll j = 1; j <= k; j++) {
			if (j > i)break;
			if (j < d) {
				dp[i][0] = (dp[i][0] + dp[i - j][0]) % MOD;
				dp[i][1] = (dp[i][1] + dp[i - j][1]) % MOD;
			}
			else {
				dp[i][1] = (dp[i][1] + dp[i - j][0]) % MOD;
				dp[i][1] = (dp[i][1] + dp[i - j][1]) % MOD;

			}
		}
	}
	cout << dp[n][1];
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