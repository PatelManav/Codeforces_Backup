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
	vll a(n);
	for (ll i = 0; i < n; i++) cin >> a[i];
	sort(all(a));
	vll b;
	for (ll i = 0; i < n - 1; i++) {
		if (a[i] == a[i + 1]) {
			b.pb(a[i]);
			i++;
		}
	}
	ll l = b[0], r = b[1];
	ll p = (l + r) * (l + r), s = l * r;
	for (ll i = 0; i < b.size() - 1; i++) {
		ll P = (b[i] + b[i + 1]) * (b[i] + b[i + 1]), S = b[i] * b[i + 1];
		if (S * p > P * s) {
			l = b[i], r = b[i + 1];
			p = P, s = S;
		}
	}
	cout << l << " " << l << " " << r << " " << r << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll T = 1;
	cin >> T;
	//ll t = 1;
	while (T--) {
		Input();
		//cout << "Case " << t << ": ";
		Solve();
		//t++;
	}
	return 0;
}