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

ll n, q;

void Input() {
	cin >> n >> q;
}

ll FastExp(ll a, ll b) {
	ll ans = 1;
	while (b) {
		if (b & 1)
			ans = (ans * a) % MOD;
		a =	(a * a) % MOD;
		b >>= 1;
	}
	return (ans % MOD);
}

void Solve() {
	string s; cin >> s;
	vector<pll>b(n);
	for (ll i = 0; i < n; i++)b[i].f = b[i].s = 0;
	if (s[0] == '1')b[0].f++;
	else b[0].s++;
	for (ll i = 1; i < n; i++) {
		b[i] = b[i - 1];
		if (s[i] == '1')b[i].f++;
		else b[i].s++;
	}
	while (q--) {
		ll l, r;
		cin >> l >> r;
		pll p1 = b[r - 1];
		pll p2;
		if (l - 2 < 0)p2 = {0, 0};
		else p2 = b[l - 2];
		ll x = p1.f - p2.f, y = p1.s - p2.s;
		cout << ((FastExp(2, x) - 1)*FastExp(2, y)) % MOD << endl;
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