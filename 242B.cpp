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
#define size_2d 10000
//Snippets: bigint, bsearch, graph, splitstring, segtree, delta, sieve

using namespace std;

ll N;
vector<pll> arr;
ll mn, mx;
unordered_map<ll, ll> mp;

void Input() {
	cin >> N;
	mn = INT_MAX;
	mx = INT_MIN;
	for (ll i = 0; i < N; i++) {
		ll u, v;
		cin >> u >> v;
		arr.push_back({u, v});
		mn = min(mn, u);
		mx = max(mx, v);
	}
}

void Solve() {
	for (ll i = 0; i < N; i++) {
		if (arr[i].f == mn)
			mp[i] = 1;
	}

	for (ll i = 0; i < N; i++) {
		if (arr[i].s == mx and mp.count(i)) {
			cout << i + 1;
			return;
		}
	}

	cout << -1;
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