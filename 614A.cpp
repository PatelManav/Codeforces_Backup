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

ll l, r, k;

void Input() {
	cin >> l >> r >> k;
}

ll FastExp(ll a, ll b) {
	ll ans = 1;
	while (b) {
		if (b & 1)
			ans = (ans * a);
		a =	(a * a);
		b >>= 1;
	}
	return (ans);
}

void Solve() {
	vll a;
	ll t = log(r) / log(k) + 0.1;
	for (ll i = 0; i <= t; i++) {
		ll x = FastExp(k, i);
		if (l <= x and x <= r) a.pb(x);
	}
	if (a.size() == 0)cout << -1;
	else for (auto it : a) cout << it << " ";

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