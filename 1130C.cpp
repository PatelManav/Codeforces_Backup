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

ll n, r1, c1, r2, c2, m;
char a[50][50];
vector<pll> x, y;

bool f = true;
ll vis[50][50];
ll dr[4] = { -1, +1, 0, 0};
ll dc[4] = {0, 0, -1, +1};
void ff(ll i, ll j) {
	if (i<0 or i >= n or j<0 or j >= m)return;
	if (f)x.pb({i, j});
	else y.pb({i, j});
	for (ll k = 0; k < 4; k++) {
		if (i + dr[k] < 0 or i + dr[k] >= n or j + dc[k] < 0 or j + dc[k] >= m)continue;
		if (vis[i + dr[k]][j + dc[k]])continue;
		if (a[i + dr[k]][j + dc[k]] == '0') {
			vis[i + dr[k]][j + dc[k]] = 1;
			ff(i + dr[k], j + dc[k]);
		}
	}
}


void Input() {
	cin >> n >> r1 >> c1 >> r2 >> c2;
	m = n;
}

void Solve() {
	for (ll i = 0; i < n; i++)for (ll j = 0; j < n; j++)cin >> a[i][j];
	r1--, c1--, r2--, c2--;
	memset(vis, 0, sizeof(vis));
	ff(r1, c1);
	memset(vis, 0, sizeof(vis));
	f = false;
	ff(r2, c2);
	ll ans = inf;
	for (auto it : x) for (auto jt : y) ans = min(ans, abs(it.f - jt.f) * abs(it.f - jt.f) + abs(it.s - jt.s) * abs(it.s - jt.s));
	cout << ans;
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