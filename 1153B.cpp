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

ll n, m, h;

void Input() {
	cin >> n >> m >> h;
}

void Solve() {
	vll a(m), b(n);
	for (ll i = 0; i < m; i++) cin >> a[i];
	for (ll i = 0; i < n; i++) cin >> b[i];
	ll c[n][m];
	for (ll i = 0; i < n; i++)
		for (ll j = 0; j < m; j++)
			cin >> c[i][j];
	for (ll i = 0; i < n; i++)
		for (ll j = 0; j < m; j++)
			if (c[i][j]) c[i][j] = min(a[j], b[i]);
	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < m; j++)
			cout << c[i][j] << " ";
		cout << endl;
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