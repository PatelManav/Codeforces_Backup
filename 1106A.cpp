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

ll n;

void Input() {
	cin >> n;
}

ll x[] = { -1, -1, +1, +1};
ll y[] = { -1, +1, -1, +1};

void Solve() {
	char a[n][n];
	for (ll i = 0; i < n; i++)for (ll j = 0; j < n; j++) cin >> a[i][j];
	ll ans = 0;
	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < n; j++) {
			bool f = a[i][j] == 'X';
			for (ll k = 0; k < 4; k++) {
				if (i + x[k] < 0 or i + x[k] >= n or j + y[k] < 0 or j + y[k] >= n) {f = false; break;}
				f &= a[i + x[k]][j + y[k]] == 'X';
			}
			ans += f;
		}
	}
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