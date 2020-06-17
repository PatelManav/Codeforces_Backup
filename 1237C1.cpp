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

ll n;

void Input() {
	cin >> n;
}

void Solve() {
	vector<pair<pll, pll>> a(n);
	for (ll i = 0; i < n; i++) cin >> a[i].f.f >> a[i].f.s >> a[i].s.f, a[i].s.s = i;
	while (!a.empty()) {
		sort(all(a));
		ll i = a.size() - 1;
		ll x = a[i].f.f, y = a[i].f.s, z = a[i].s.f, pos = a[i].s.s;
		a.pop_back();
		ll idx = 0, ans = 1e10;
		for (ll it = 0; it < a.size(); it++) {
			ll dst = abs(a[it].f.f - x) + abs(a[it].f.s - y) + abs(a[it].s.f - z);
			if (dst < ans) ans = dst, idx = it;
		}
		cout << pos + 1 << " " << a[idx].s.s + 1 << endl;
		a.erase(a.begin() + idx);
	}
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