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

ll n, m, ta, tb, k;

void Input() {
	cin >> n >> m >> ta >> tb >> k;
}

void Solve() {
	vll a(n), b(m);
	for (ll i = 0; i < n; i++) cin >> a[i];
	for (ll i = 0; i < m; i++) cin >> b[i];
	ll ans = -inf;
	if (k >= n)cout << -1;
	else {
		for (ll i = 0; i <= k; i++) {
			ll left = k - i, x = a[i] + ta;
			ll l = 0, r = m - 1, midd = m;
			while (l <= r) {
				ll mid = l + (r - l) / 2;
				if (b[mid] < x) l = mid + 1;
				else midd = mid, r = mid - 1;
			}
			ll t = midd + left;
			if (t >= m) {cout << -1; return;}
			else ans = max(ans, b[t] + tb);
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