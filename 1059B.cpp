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

ll n, m;

void Input() {
	cin >> n >> m;
}

ll dr[8] = { -1, +1, 0, 0, -1, +1, -1, +1};
ll dc[8] = {0, 0, -1, +1, -1, +1, +1, -1};

void Solve() {
	char a[n][m];
	for (ll i = 0; i < n; i++)for (ll j = 0; j < m; j++)cin >> a[i][j];
	char b[n][m];
	for (ll i = 0; i < n; i++)for (ll j = 0; j < m; j++)b[i][j] = '.';
	for (ll i = 1; i < n - 1; i++)for (ll j = 0; j < m - 1; j++) {
			ll t = 0;
			for (ll k = 0; k < 8; k++)if (a[i + dr[k]][j + dc[k]] == '#')t++;
			if (t == 8) {
				for (ll k = 0; k < 8; k++) b[i + dr[k]][j + dc[k]] = '#';
			}
		}

	bool f = true;
	for (ll i = 0; i < n; i++)for (ll j = 0; j < m; j++)f &= (b[i][j] == a[i][j]);
	if (f)cout << "YES";
	else cout << "NO";

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