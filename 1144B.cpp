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
//Snippets: graph, segtree, delta, sieve, fastexp

using namespace std;

ll n;

void Input() {
	cin >> n;
}

void Solve() {
	vll a(n), o, e;
	for (ll i = 0; i < n; i++) cin >> a[i];
	for (ll i = 0; i < n; i++) {
		if (a[i] % 2) o.pb(a[i]);
		else e.pb(a[i]);
	}
	sort(all(e)); sort(all(o));
	ll x = o.size(), y = e.size();
	ll d = abs(x - y);
	if (d == 0)cout << 0;
	else {
		ll s = 0;
		if (y > x) for (ll i = 0; i < d - 1; i++)s += e[i];
		if (x > y) for (ll i = 0; i < d - 1; i++)s += o[i];
		cout << s;
	}
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