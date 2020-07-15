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
	vector<double> a(n);
	for (ll i = 0; i < n; i++) cin >> a[i];
	double ans = 0;
	for (ll i = 0; i < n; i++) {
		for (ll j = i; j < n; j++) {
			double t = 0;
			for (ll k = i; k <= j; k++) {
				double u = a[k] + 0.0000001;
				for (ll l = i; l <= j; l++) {
					if (k == l)continue;
					u *= (1 - a[l]);
				}
				t += u;
			}
			ans = max(ans, t);
		}
	}
	cout.precision(20);
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