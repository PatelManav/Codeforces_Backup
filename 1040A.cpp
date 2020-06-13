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

ll n, x, y;

void Input() {
	cin >> n >> x >> y;
}

void Solve() {
	vll a(n);
	for (ll i = 0; i < n; i++) cin >> a[i];
	ll ans = 0;
	for (ll i = 0; i < n / 2; i++) {
		if (a[i] != a[n - 1 - i] and max(a[i], a[n - 1 - i]) != 2) {
			cout << -1;
			return;
		}
		else if (a[i] != a[n - 1 - i]) {
			if (a[i] == 0 or a[n - 1 - i] == 0)ans += x;
			else ans += y;
		}
		if (a[i] == a[n - 1 - i] and a[i] == 2) {
			ans += 2 * (min(x, y));
		}
	}
	if (n % 2 and a[n / 2] == 2) ans += min(x, y);
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