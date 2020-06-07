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
//Snippets: delta, sieve, fastexp, dfs, bfs, dijkstra

using namespace std;

ll n, m;

void Input() {
	cin >> n;
}

void Solve() {
	vll a(n);
	vector<pll> c;
	for (ll i = 0; i < n; i++) cin >> a[i];
	cin >> m;
	vll b(m);
	for (ll i = 0; i < m; i++) cin >> b[i];
	for (ll i = 0; i < n; i++) c.pb({a[i], 1});
	for (ll i = 0; i < m; i++) c.pb({b[i], 2});
	sort(all(c));
	ll x = 3 * n, y = 3 * m;
	ll ans = x - y, l = x, r = y;
	for (auto it : c) {
		if (it.s == 1)x--;
		else y--;

		if (ans < x - y) {
			ans = x - y;
			l = x, r = y;
		}
		else if (ans == x - y and l < x) {
			l = x, r = y;
		}
	}
	cout << l << ":" << r;
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