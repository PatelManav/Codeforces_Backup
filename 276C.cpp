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
//Snippets: graph, delta, sieve, fastexp

using namespace std;

const ll MX = 300000;
ll n, q, tree[MX] = {0}, r[MX];

ll read(ll idx) {
	ll sum = 0;
	while (idx > 0) {
		sum += tree[idx];
		idx -= (idx & -idx);
	}
	return sum;
}

void update(ll idx, ll val) {
	while (idx < MX) {
		tree[idx] += val;
		idx += (idx & -idx);
	}
}

void Input() {
	cin >> n >> q;
}

void Solve() {
	vll a(n);
	for (ll i = 0; i < n; i++) cin >> a[i];
	sort(all(a));
	while (q--) {
		ll l, r;
		cin >> l >> r;
		update(l, 1);
		update(r + 1, -1);
	}
	for (ll i = 1; i <= n; i++) r[i - 1] = read(i);
	sort(r, r + n);
	ll ans = 0;
	for (ll i = 0; i < n; i++) ans += a[i] * r[i];
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