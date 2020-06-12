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

ll n, x, m;

void Input() {
	cin >> n >> x >> m;
}

void Solve() {
	vector<pll> a(m);
	bool f = false;
	ll l = x, r = x;
	for (ll i = 0; i < m; i++) cin >> a[i].f >> a[i].s;
	for (ll i = 0; i < m; i++) {
		if (a[i].f <= x and a[i].s >= x) f = true;
		if (f) {
			if ((a[i].f <= l and a[i].s >= r) or (r >= a[i].f and r <= a[i].s) or (l >= a[i].f and l <= a[i].s)) {
				l = min(l, a[i].f);
				r = max(r, a[i].s);
			}
		}
	}
	cout << r - l + 1 << endl;
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