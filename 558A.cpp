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
	vector<pll> a(n);
	for (ll i = 0; i < n; i++) cin >> a[i].f >> a[i].s;
	vector<pll> b, c;
	for (ll i = 0; i < n; i++) {
		if (a[i].f > 0)b.pb(a[i]);
		else c.pb(a[i]);
	}
	sort(all(b)), sort(rall(c));
	ll ans = 0;
	ll x = 0, y = 0;
	while (x != b.size() and y != c.size()) ans += b[x].s + c[y].s, x++, y++;
	if (x != b.size())ans += b[x].s;
	if (y != c.size())ans += c[y].s;
	cout << ans;

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