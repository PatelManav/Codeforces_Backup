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
#define f first
#define s second
#define inf INT_MAX
#define size_1d 10000000
#define size_2d 1000
//Snippets: bigint, bsearch, graph, splitstring, segtree, delta, sieve, fastexp

using namespace std;

ll n, f;
vector<pll> arr;

bool MC(pll p1, pll p2) {
	return (min(2 * p1.f, p1.s) - min(p1.f, p1.s)) > (min(2 * p2.f, p2.s) - min(p2.f, p2.s));
}

void Input() {
	cin >> n >> f;
	for (ll i = 0; i < n; i++) {
		ll u, v;
		cin >> u >> v;
		arr.push_back({u, v});
	}
	sort(all(arr), MC);
}

void Solve() {
	ll ans = 0;
	for (ll i = 0; i < arr.size(); i++) {
		if (f > 0)
			ans += min(2 * arr[i].f, arr[i].s);
		else
			ans += min(arr[i].f, arr[i].s);
		f--;
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