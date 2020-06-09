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
double m;

void Input() {
	cin >> n >> m;
}

void Solve() {
	double ans = inf;
	vector<pair<double, double>> a(n);
	for (ll i = 0; i < n; i++) cin >> a[i].f;
	for (ll i = 0; i < n; i++) cin >> a[i].s;
	ll st = 0, ed = 1000000010;
	while (st <= ed) {
		double mid = st + (ed - st) / 2;
		double d = mid;
		d -= (m + d) / a[0].f;
		for (ll i = 1; i < n; i++) {
			d -= (m + d) / a[i].s;
			d -= (m + d) / a[i].f;
		}
		d -= (m + d) / a[0].s;
		if (d < 0)st = mid + 1;
		else {ans = min(ans, mid); ed = mid - 1;}
	}
	cout.precision(12);
	if (ans == inf) cout << -1;
	else {
		double l = ans - 1, r = ans, mid;
		for (ll i = 0; i < 1000; i++) {
			mid = l + (r - l) / 2;
			double d = mid;
			d -= (m + d) / a[0].f;
			for (ll i = 1; i < n; i++) {
				d -= (m + d) / a[i].s;
				d -= (m + d) / a[i].f;
			}
			d -= (m + d) / a[0].s;
			if (d < 0)l = mid;
			else r = mid;
		}
		cout << mid;
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