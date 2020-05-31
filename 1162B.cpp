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

ll n, m;

void Input() {
	cin >> n >> m;
}

void Solve() {
	ll a[n][m], b[n][m];
	for (ll i = 0; i < n; i++) for (ll j = 0; j < m; j++) cin >> a[i][j];
	for (ll i = 0; i < n; i++) for (ll j = 0; j < m; j++) cin >> b[i][j];
	for (ll i = 0; i < n; i++) for (ll j = 0; j < m; j++) {
			ll u = a[i][j], v = b[i][j];
			a[i][j] = min(u, v), b[i][j] = max(u, v);
		}
	for (ll i = 0; i < n; i++) {
		for (ll j = 1; j < m; j++) {
			if (a[i][j] <= a[i][j - 1]) {cout << "Impossible"; return;}
		}
	}
	for (ll i = 0; i < m; i++) {
		for (ll j = 1; j < n; j++) {
			if (a[j][i] <= a[j - 1][i]) {cout << "Impossible"; return;}
		}
	}
	for (ll i = 0; i < n; i++) {
		for (ll j = 1; j < m; j++) {
			if (b[i][j] <= b[i][j - 1]) {cout << "Impossible"; return;}
		}
	}
	for (ll i = 0; i < m; i++) {
		for (ll j = 1; j < n; j++) {
			if (b[j][i] <= b[j - 1][i]) {cout << "Impossible"; return;}
		}
	}

	cout << "Possible";
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