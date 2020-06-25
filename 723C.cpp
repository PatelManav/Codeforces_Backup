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
	vll a(n), c(m + 1, 0);
	vector<pll>b;
	ll oth = 0;
	for (ll i = 0; i < n; i++) {cin >> a[i]; if (a[i] <= m)c[a[i]]++; else oth++;}
	for (ll i = 1; i <= m; i++)b.pb({c[i], i});
	sort(all(b));
	ll x = n / m;
	ll r = m - 1;
	ll ans = 0;
	for (ll i = 0; i < m; i++) {
		while (b[i].f < x) {
			while (b[r].f <= x and r >= 0)r--;
			for (ll j = 0; j < n; j++) {
				if (b[i].f >= x) break;
				while (b[r].f <= x and r >= 0)r--;
				if (a[j] > m and oth) a[j] = b[i].s, b[i].f++, ans++, oth--;
				else if (r >= 0 and b[r].s == a[j] and !oth)a[j] = b[i].s, b[i].f++, b[r].f--, ans++;
			}
		}
	}
	cout << x << " " << ans << endl;
	for (auto it : a)cout << it << " ";
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