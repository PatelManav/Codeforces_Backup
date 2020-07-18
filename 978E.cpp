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

ll n, w;

void Input() {
	cin >> n >> w;
}

void Solve() {
	vll a(n);
	for (ll i = 0; i < n; i++) cin >> a[i];
	ll l = 0, r = w;
	ll po = 0, ne = 0, t = 0;
	for (auto it : a) {
		t += it;
		if (t < 0) {
			l -= t;
			t = 0;
		}
	}
	if (l > w or l < 0) {cout << 0; return;}
	t = w;
	for (auto it : a) {
		t += it;
		if (t > w) {
			r -= abs(w - t);
			t = w;
		}
	}
	if (r > w or r < 0 or r < l) {cout << 0; return;}
	cout << r - l + 1;
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