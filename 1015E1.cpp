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
	char a[n][m], b[n][m];
	for (ll i = 0; i < n; i++) for (ll j = 0; j < m; j++) cin >> a[i][j];
	for (ll i = 0; i < n; i++) for (ll j = 0; j < m; j++) b[i][j] = '.';
	vector<pair<pll, ll>> v;
	for (ll i = 0; i < n; i++) for (ll j = 0; j < m; j++) if (a[i][j] == '*') {
				ll t = 0;
				bool f = true;
				while (f) {
					for (ll k = 0; k < 4; k++) {
						ll x = i + (t + 1) * dr[k], y = j + (t + 1) * dc[k];
						if (x < 0 or x >= n or y < 0 or y >= m) {f = false; break;}
						if (a[x][y] != '*') {f = false; break;}
					}
					if (f)t++;
				}
				if (t)v.pb({{i, j}, t});
			}
	for (auto it : v) {
		b[it.f.f][it.f.s] = '*';
		for (ll t = 1; t <= it.s; t++) {
			for (ll k = 0; k < 4; k++) {
				b[it.f.f + t * dr[k]][it.f.s + t * dc[k]] = '*';
			}
		}
	}
	for (ll i = 0; i < n; i++) for (ll j = 0; j < m; j++) if (a[i][j] != b[i][j]) {cout << -1; return;}
	cout << v.size() << endl;
	for (auto it : v)cout << it.f.f + 1 << " " << it.f.s + 1 << " " << it.s << endl;


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