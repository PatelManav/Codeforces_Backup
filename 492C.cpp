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

ll n, r, avg;
ll sum = 0;
vector<pll> arr;

bool MC(pll p1, pll p2) {
	return p1.s < p2.s;
}

void Input() {
	cin >> n >> r >> avg;
	for (ll i = 0; i < n; i++) {
		ll u, v;
		cin >> u >> v;
		sum += u;
		arr.pb({u, v});
	}
}

void Solve() {
	sort(all(arr), MC);
	ll reqd = max(0ll, avg * n - sum);
	ll ans = 0;
	for (ll i = 0; i < n; i++) {
		if (reqd == 0)
			break;
		ans += (min(reqd, r - arr[i].f) * arr[i].s);
		reqd -= min(reqd, r - arr[i].f);
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