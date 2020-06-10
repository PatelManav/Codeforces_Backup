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

bool MC(pll p1, pll p2) {
	if (p1.f == p2.f)return p1.s < p2.s;
	return p1.f < p2.f;
}

void Solve() {
	vector<pll> a(2 * n);
	for (ll i = 0; i < 2 * n; i++) cin >> a[i].f, a[i].s = i;
	sort(all(a), MC);
	ll x = 0, y = 0, ans = 0;
	for (ll i = 0; i < 2 * n; i++) {
		if (i % 2) {
			ans += abs(x - a[i].s);
			x = a[i].s;
		}
		else {
			ans += abs(y - a[i].s);
			y = a[i].s;
		}
	}
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