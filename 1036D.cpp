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
	cin >> n;
}

void Solve() {
	vll a(n);
	for (ll i = 0; i < n; i++) cin >> a[i];
	cin >> m;
	vll b(m);
	for (ll i = 0; i < m; i++) cin >> b[i];
	ll s = 0;
	for (auto it : a)s += it;
	for (auto it : b)s -= it;
	if (s)cout << -1;
	else {
		ll x = a[0], y = b[0], ans = 0;
		ll l1 = 0, r1 = 0, l2 = 0, r2 = 0;
		while (r1 < n or r2 < m) {
			if (x > y) {
				r2++;
				y += b[r2];
			}
			else if (x < y) {
				r1++;
				x += a[r1];
			}
			else {
				ans++;
				r1++, r2++;
				x = a[r1],
				y = b[r2];
			}
		}
		cout << ans;
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