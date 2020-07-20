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
#define rep(i,v,n) for(ll i = v; i < n; i++)
//Snippets: delta, sieve, fastexp, dfs, bfs, dijkstra, floodfill

using namespace std;

ll n, p, q, r;

void Input() {
	cin >> n >> p >> q >> r;
}

void Solve() {
	vll a(n);
	ll d[] = {p, q, r};
	for (ll i = 0; i < n; i++) cin >> a[i];
	ll b[n][3];
	for (ll i = 0; i < n; i++)b[i][0] = a[i] * d[0];
	for (ll i = 1; i < 3; i++)b[0][i] = b[0][i - 1] + a[0] * d[i];
	for (ll i = 1; i < n; i++) {
		for (ll j = 0; j < 3; j++) {
			if (!j)b[i][j] = max(b[i][j], b[i - 1][j]);
			else b[i][j] = max(b[i][j - 1] + d[j] * a[i], b[i - 1][j]);
		}
	}
	cout << b[n - 1][2];
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