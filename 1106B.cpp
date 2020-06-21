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
	priority_queue<pll, vector<pll>, greater<pll>> PQ;
	for (ll i = 0; i < n; i++) cin >> a[i].f;
	for (ll i = 0; i < n; i++) cin >> a[i].s, PQ.push({a[i].s, i});
	while (m--) {
		ll t, d;
		cin >> t >> d;
		t--;
		if (a[t].f >= d)a[t].f -= d, cout << a[t].s * d << endl;
		else {
			d -= a[t].f;
			ll cost = a[t].f * a[t].s;
			a[t].f = 0;
			while (!PQ.empty()) {
				pll u = PQ.top();
				if (d <= a[u.s].f) {
					a[u.s].f -= d;
					cost += d * a[u.s].s;
					d = 0;
					break;
				}
				else {
					d -= a[u.s].f;
					cost += a[u.s].f * a[u.s].s;
					a[u.s].f = 0;
					PQ.pop();
				}
			}
			if (d)cout << 0 << endl;
			else cout << cost << endl;
		}
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