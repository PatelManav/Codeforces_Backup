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
	vll x[n + m - 1], y[n + m - 1];
	for (ll i = 0; i < n; i++)for (ll j = 0; j < m; j++) {cin >> a[i][j]; x[i + j].pb(a[i][j]);}
	for (ll i = 0; i < n; i++)for (ll j = 0; j < m; j++) {cin >> b[i][j]; y[i + j].pb(b[i][j]);}
	for (ll i = 0; i < n + m - 1; i++) {
		sort(all(x[i])), sort(all(y[i]));
		if (x[i] != y[i]) {
			cout << "NO";
			return;
		}
	}
	cout << "YES";
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