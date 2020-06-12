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
//Snippets: delta, sieve, fastexp, dfs, bfs, dijkstra, floodfill

using namespace std;

ll n, m;

void Input() {
	cin >> n >> m;
}

void Solve() {
	ll a[n][m];
	for (ll i = 0; i < n; i++) for (ll j = 0; j < m; j++) cin >> a[i][j];
	map<ll, vll> mp;
	for (ll i = 0; i < n; i++) for (ll j = 0; j < m; j++) mp[i + j].pb(a[i][j]);
	ll ans = 0;
	for (auto it : mp) {
		for (ll i = 0; i < it.s.size(); i++) {
			if (it.s[i] != mp[m + n - 2 - it.f][i])ans++;
		}
	}
	cout << ans / 2 << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll T = 1;
	cin >> T;
	//ll t = 1;
	while (T--) {
		Input();
		//cout << "Case " << t << ": ";
		Solve();
		//t++;
	}
	return 0;
}