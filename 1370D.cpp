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

ll n, k;
vll a;

void Input() {
	cin >> n >> k;
}

bool MC(ll m, bool f) {
	ll ans = 0;
	for (auto it : a) {
		if (f)ans++, f = !f;
		else if (it <= m)ans++, f = !f;
	}
	return ans >= k;
}

void Solve() {
	a.resize(n);
	for (ll i = 0; i < n; i++) cin >> a[i];
	ll l = 1, r = 10e9, midd;
	while (l <= r) {
		ll m = l + (r - l) / 2;
		if (MC(m, true) or MC(m, false))midd = m, r = m - 1;
		else l = m + 1;
	}
	cout << midd;
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