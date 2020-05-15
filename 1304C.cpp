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

ll n, m;

void Input() {
	cin >> n >> m;
}

void Solve() {
	vector<pair<ll, pll>> arr;
	for (ll i = 0; i < n; i++) {
		ll t, l, r;
		cin >> t >> l >> r;
		arr.pb({t, {l, r}});
	}
	ll mn = m, mx = m, p = 0;
	for (ll i = 0; i < n; i++) {
		mx = mx + arr[i].f - p;
		mn = mn - (arr[i].f - p);
		if (mn > arr[i].s.s or mx < arr[i].s.f) {
			cout << "NO\n";
			return;
		}
		p = arr[i].f;
		mx = min(arr[i].s.s, mx);
		mn = max(arr[i].s.f, mn);
	}
	cout << "YES\n";

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