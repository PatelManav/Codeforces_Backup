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
	vll a(n), b(n);
	for (ll i = 0; i < n; i++) cin >> a[i];
	for (ll i = 0; i < n; i++) cin >> b[i];
	vll c, d;
	for (auto it : a)if (it)c.pb(it);
	for (auto it : b)if (it)d.pb(it);
	vll e;
	ll idx = inf;
	for (ll i = 0; i < d.size(); i++) {
		if (d[i] == c[0]) idx = i;
		if (idx != inf)e.pb(d[i]);
	}
	for (ll i = 0; i < idx; i++)e.pb(d[i]);
	for (ll i = 0; i < c.size(); i++)if (c[i] != e[i]) {cout << "NO"; return;}
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