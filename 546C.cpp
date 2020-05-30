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
	queue<ll> a, b;
	ll k; cin >> k;
	for (ll i = 0; i < k; i++) {ll d; cin >> d; a.push(d);}
	cin >> k;
	for (ll i = 0; i < k; i++) {ll d; cin >> d; b.push(d);}
	ll ans = 0, t = 0;
	while (a.size() and b.size()) {
		if (ans >= 1000) {cout << -1; return;}
		ll u = a.front(), v = b.front();
		a.pop(), b.pop();
		if (u > v)a.push(v), a.push(u);
		else if (v > u)b.push(u), b.push(v);
		ans++;
		if (a.size() == 0) {t = 2; break;}
		else if (b.size() == 0) {t = 1; break;}
	}
	cout << ans << " " << t;
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

