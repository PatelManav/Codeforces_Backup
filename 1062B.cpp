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

ll n;

void Input() {
	cin >> n;
}

void Solve() {
	vll a;
	ll t = 0, z = 1;
	while (n % 2 == 0)n /= 2, t++;
	if (t)a.pb(t), z *= 2;
	for (ll i = 3 ; i <= n; i++) {
		t = 0;
		while (n % i == 0)n /= i, t++;
		if (t)a.pb(t), z *= i;
	}
	if (n > 1)a.pb(n);
	sort(rall(a));
	ll mx = 0, p = 0;
	bool f = false;
	for (auto it : a) {
		ll y = ceil(log2(it));
		if (mx < y)p = it;
		mx = max(mx, y);
	}
	for (auto it : a)if (it != p)f = true;
	ll u = log2(p);
	if (u != mx)f = true;
	cout << z << " ";
	if (mx) cout << mx + f;
	else cout << 0;
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