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

ll p, q, l, r;

void Input() {
	cin >> p >> q >> l >> r;
}

void Solve() {
	vector<pair<ll, ll>> a(p), b(q);
	for (ll i = 0; i < p; i++) cin >> a[i].f >> a[i].s;
	for (ll i = 0; i < q; i++) cin >> b[i].f >> b[i].s;
	ll ans = 0;
	for (ll j = l; j <= r; j++) {
		bool f = false;
		for (ll k = 0; k < q; k++) {
			pll p1 = b[k];
			p1.f += j, p1.s += j;
			for (ll i = 0; i < p; i++) {
				if (p1.f > a[i].s or p1.s < a[i].f) continue;
				f = true;
			}
		}
		ans += f;
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