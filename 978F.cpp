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
	vector<pll> a(n);
	for (ll i = 0; i < n; i++) cin >> a[i].f, a[i].s = i;
	mll mp;
	while (m--) {
		ll l, r;
		cin >> l >> r;
		if (a[l - 1].f > a[r - 1].f)mp[l - 1]++;
		else if (a[r - 1].f > a[l - 1].f)mp[r - 1]++;
	}
	sort(all(a));
	vll ans(n);
	for (ll i = 0; i < n; i++) {
		ll l = 0, r = n - 1, midd = -1;
		while (l <= r) {
			ll mid = l + (r - l) / 2;
			if (a[mid].f < a[i].f)l = mid + 1, midd = max(midd, mid);
			else r = mid - 1;
		}
		ll x;
		if (midd != -1)x = midd + 1 - mp[a[i].s];
		else x = 0;
		ans[a[i].s] = x;
	}
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