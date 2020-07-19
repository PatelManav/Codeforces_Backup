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

ll n, m, k;

void Input() {
	cin >> n >> m >> k;
}

void Solve() {
	vector<pll> a;
	for (ll i = 0; i < n; i++) {
		if (i % 2)for (ll j = m - 1; j >= 0; j--) a.pb({i + 1, j + 1});
		else for (ll j = 0; j < m; j++) a.pb({i + 1, j + 1});
	}
	vll b;
	b.pb(n * m - 2 * (k - 1));
	ll v = 2 * (k - 1);
	while (v) {
		b.pb(2);
		v -= 2;
	}
	ll t = 0, tp = 0;
	for (auto it : a) {
		if (!tp)cout << b[t];
		cout << " " << it.f << " " << it.s;
		tp++;
		if (tp == b[t])t++, tp = 0, cout << endl;
	}
	cout << endl;
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
