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

ll x, y, m;

void Input() {
	cin >> x >> y >> m;
}

ll step(ll x, ll y) {
	ll mn = min(x, y), mx = max(x, y);
	if (mx >= m) return 0;
	if (mn < 0) {
		ll t = (abs(mn) + mx - 1) / mx;
		return t + step(mn + t * mx, mx);
	}
	else return 1 + step(mn + mx, mx);
}

void Solve() {
	if (max(x, y) >= m)cout << 0;
	else if (x <= 0 and y <= 0)cout << -1;
	else cout << step(x, y);
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