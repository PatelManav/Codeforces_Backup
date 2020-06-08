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

ll n, m, t = 0;
bool X = true;
char a[50][50];
bool vis[50][50];

ll dr[4] = { -1, +1, 0, 0};
ll dc[4] = {0, 0, -1, +1};

void ff(ll i, ll j) {
	if (i<0 or i >= n or j<0 or j >= m)return;
	if (i == n - 1 and j == m - 1) X = true;
	for (ll k = 0; k < 4; k++) {
		if (i + dr[k] < 0 or i + dr[k] >= n or j + dc[k] < 0 or j + dc[k] >= m)continue;
		if (vis[i + dr[k]][j + dc[k]])continue;
		if (a[i + dr[k]][j + dc[k]] == '.' or a[i + dr[k]][j + dc[k]] == 'G') {
			if (a[i + dr[k]][j + dc[k]] == 'G') t++;
			vis[i + dr[k]][j + dc[k]] = 1;
			ff(i + dr[k], j + dc[k]);
		}
	}
}

void Input() {
	cin >> n >> m;
}

void Solve() {
	for (ll i = 0; i < n; i++) for (ll j = 0; j < m; j++) cin >> a[i][j];
	bool f = true;
	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < m; j++) {
			if (a[i][j] == 'B') {
				for (ll k = 0; k < 4; k++) {
					if (i + dr[k] < 0 or i + dr[k] >= n or j + dc[k] < 0 or j + dc[k] >= m)continue;
					if (a[i + dr[k]][j + dc[k]] == 'G') f = false;
					else if (a[i + dr[k]][j + dc[k]] != 'B') a[i + dr[k]][j + dc[k]] = '#';
				}
			}
		}
	}
	if (!f)cout << "No\n";
	else {
		ll s = 0, x = -1, y = -1;
		t = 0, memset(vis, 0, sizeof(vis)), X = false;
		for (ll i = 0; i < n; i++) for (ll j = 0; j < m; j++) if (a[i][j] == 'G')x = i, y = j, s++;
		if (x != -1 and y != -1) ff(x, y);
		if ((t == s and a[n - 1][m - 1] != '#' and X) or (x == -1 and y == -1)) cout << "Yes\n";
		else cout << "No\n";
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