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

ll n;

void Input() {
	cin >> n;
}

void Solve() {
	vll a(n);
	for (ll i = 0; i < n; i++) cin >> a[i];
	//0 - no G no C | 1 - no G, C | 2 - G, no C | 3 - G,C
	//5 - C, 6 - G, 7 - R
	ll b[n][4];
	for (ll i = 0; i < n; i++)for (ll j = 0; j < 4; j++)b[i][j] = 0;
	b[0][a[0]] = 1;
	for (ll i = 1; i < n; i++) {
		if (a[i] == 0)b[i][0] = 1;
		else if (a[i] == 3) {
			if (!b[i - 1][1] and !b[i - 1][2])b[i][3] = 1;
			if (b[i - 1][1])b[i][2] = 1;
			if (b[i - 1][2])b[i][1] = 1;
		}
		else {
			if (b[i - 1][a[i]])b[i][0] = 1;
			else b[i][a[i]] = 1;
		}
	}
	ll ans = 0;
	for (ll i = 0; i < n; i++)ans += b[i][0];
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