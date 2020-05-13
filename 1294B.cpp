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

bool MC(pll p1, pll p2) {
	if (p1.s == p2.s)
		return p1.f < p2.f;
	return p1.s < p2.s;
}

void Input() {
	cin >> n, arr.clear();
	for (ll i = 0; i < n; i++) {
		ll u, v;
		cin  >> u >> v;
		arr.pb({u, v});
	}
	sort(all(arr), MC);
}

void Solve() {
	string ans = "";
	ll x = 0, y = 0;
	for (ll i = 0 ; i < n; i++) {
		if (y > arr[i].s or x > arr[i].f) {
			cout << "NO\n";
			return;
		}
		while (x < arr[i].f) {
			ans += "R";
			x++;
		}
		while (y < arr[i].s) {
			ans += "U";
			y++;
		}
	}

	cout << "YES\n" << ans << endl;
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