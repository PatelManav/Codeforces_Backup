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

ll n, m, x, y;
vll adj[size_1d], vis(size_1d, 0);

void dfs(ll u) {
	vis[u] = 1;
	x++;
	for (auto it : adj[u]) {
		y++;
		if (!vis[it]) dfs(it);
	}
}
void Input() {
	cin >> n >> m;
}

void Solve() {
	mll a;
	for (ll i = 0; i < m; i++) {
		ll u, v;
		cin >> u >> v;
		adj[u].pb(v), adj[v].pb(u);
		a[u] = a[v] = 1;
	}
	for (auto it : a) {
		x = y = 0;
		if (!vis[it.f]) {
			dfs(it.f);
			y /= 2;
			if (x * (x - 1) / 2 != y) {
				cout << "NO";
				return;
			}
		}
	}
	cout << "YES";
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