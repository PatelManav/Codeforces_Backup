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

ll n, m;
ll dr[4] = { -1, +1, 0, 0};
ll dc[4] = {0, 0, -1, +1};

void Input() {
	cin >> n >> m;
}

void Solve() {
	ll a[n][m], b[n][m];
	for (ll i = 0; i < n; i++) for (ll j = 0; j < m; j++) cin >> a[i][j];
	for (ll i = 0; i < n; i++) for (ll j = 0; j < m; j++) b[i][j] = 3;
	b[0][0] = b[n - 1][m - 1] = b[0][m - 1] = b[n - 1][0] = 2;
	for (ll i = 1; i < n - 1; i++) for (ll j = 1; j < m - 1; j++) b[i][j] = 4;
	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < m; j++) {
			if (a[i][j] > b[i][j]) {cout << "NO\n"; return;}
		}
	}
	cout << "YES\n";
	for (ll i = 0; i < n; i++) {{for (ll j = 0; j < m; j++) cout << b[i][j] << " ";} cout << endl;}

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll T = 1;
	cin >> T;
	//ll t = 1;
	while (T--) {
		Input();
		//cout << "Case " << t << ": ";
		Solve();
		//t++;
	}
	return 0;
}