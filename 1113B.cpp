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
	vll a(n), b(n);
	for (ll i = 0; i < n; i++) cin >> a[i];
	sort(all(a));
	b[0] = a[0];
	for (ll i = 1; i < n; i++) b[i] = a[i] + b[i - 1];
	ll ans = b[n - 1];
	for (ll j = n - 1; j >= 0; j--) {
		for (ll i = 1; i * i <= a[j]; i++) {
			if (a[j] % i == 0) {
				ll t = b[n - 1] - a[0] - a[j];
				ans = min(ans, t + a[j] / i + a[0] * i);
				ans = min(ans, t + a[j] / (a[j] / i) + a[0] * (a[j] / i));
			}
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