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
	vll a(n + 1), b(m + 1, 1), c(n + 1, 0);
	vector<pll>d(m + 1);
	for (ll i = 1; i < n + 1; i++) cin >> a[i];
	map<ll, vll>mp;
	for (ll i = 1; i < m + 1; i++) {
		ll u, v;
		cin >> u >> v;
		c[u]++, c[v]++;
		mp[u].pb(i), mp[v].pb(i);
		d[i] = {u, v};
	}
	for (ll i = 1; i < n + 1; i++) if (a[i] >= c[i]) for (auto it : mp[i])b[it] = 0;
	vll ans;
	for (ll i = 1; i < m + 1; i++) {
		if (b[i]) {
			bool f = false;
			if (a[d[i].f] > 0) a[d[i].f]--, f = true;
			if (a[d[i].s] > 0) a[d[i].s]--, f = true;
			if (!f) {
				cout << "DEAD";
				return;
			}
			ans.pb(i);
		}
	}
	for (ll i = 1; i < m + 1; i++) {
		if (!b[i]) {
			bool f = false;
			if (a[d[i].f] > 0) a[d[i].f]--, f = true;
			if (a[d[i].s] > 0) a[d[i].s]--, f = true;
			if (!f) {
				cout << "DEAD";
				return;
			}
			ans.pb(i);
		}
	}
	cout << "ALIVE\n";
	for (auto it : ans)cout << it << " ";
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