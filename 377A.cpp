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
//Snippets: delta, sieve, fastexp, dfs, bfs, dijkstra

using namespace std;

ll n, m, k, t;
char a[1000][1000];


void Input() {
	cin >> n >> m >> k;
}

ll dr[4] = { -1, +1, 0, 0};
ll dc[4] = {0, 0, -1, +1};
void ff(ll i, ll j) {
	if (i<0 or i >= n or j<0 or j >= m or t <= 0)return;
	for (ll k = 0; k < 4; k++) {
		if (i + dr[k] >= 0 and i + dr[k] < n and a[i + dr[k]][j] == '.') {
			t--;
			a[i + dr[k]][j] = 'r';
			ff(i + dr[k], j);
		}
		if (t <= 0)return;
		if (j + dc[k] >= 0 and j + dc[k] < m and a[i][j + dc[k]] == '.') {
			t--;
			a[i][j + dc[k]] = 'r';
			ff(i, j + dc[k]);
		}
	}
}

void Solve() {
	ll x = 0, y = 0, s = 0;
	for (ll i = 0; i < n; i++) {for (ll j = 0; j < m; j++) {cin >> a[i][j];}}
	for (ll i = 0; i < n; i++) {for (ll j = 0; j < m; j++) {if (a[i][j] == '.')x = i, y = j, s++;}}
	t = s - k;
	ff(x, y);
	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < m; j++) {
			if (a[i][j] == 'r')cout << '.';
			else if (a[i][j] == '.')cout << 'X';
			else cout << a[i][j];
		}
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