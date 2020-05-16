/*May The Force Be With Me*/
#include <bits/stdc++.h>
#include <stdio.h>
#include <ctype.h>
#define ll long long
#define MOD 1000000007
#define endl "\n"
#define vll vector<long long>
#define pll pair<long long, long long>
#define all(c) c.begin(),c.end()
#define pb push_back
#define f first
#define s second
#define inf INT_MAX
#define size_1d 10000000
#define size_2d 1000
//Snippets: graph, segtree, delta, sieve, fastexp

using namespace std;

ll n;
vector<pll> arr;

void Input() {
	cin >> n, arr.clear();
	arr.pb({0, 0});
	for (ll i = 0; i < n; i++) {
		ll u, v;
		cin >> u >> v;
		arr.pb({u, v});
	}
}

void Solve() {
	for (ll i = 0; i < n; i++) {
		ll p = arr[i + 1].f - arr[i].f, c = arr[i + 1].s - arr[i].s;
		if (!((p >= 0) and (c >= 0) and (p >= c))) {
			cout << "NO\n";
			return;
		}
	}
	if (!(arr[n].f >= arr[n].s)) cout << "NO\n";
	else cout << "YES\n";
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