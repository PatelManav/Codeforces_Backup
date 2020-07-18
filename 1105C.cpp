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

ll n, l, r;

void Input() {
	cin >> n >> l >> r;
}

void Solve() {
	ll r1 = 0, r2 = 0, r0 = 0;
	r0 = (r) / 3 - (l + 2) / 3 + 1;
	r1 = (r - 1) / 3 - (l - 1 + 2) / 3 + 1;
	r2 = (r - 2) / 3 - (l - 2 + 2) / 3 + 1;
	if (r == 1)r2--;
	ll a[n][3] = {0}, rem[] = {r0, r1, r2};
	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < 3; j++) {
			if (!i) a[i][j] = rem[j];
			else {
				if (j == 0) a[i][0] = ((a[i - 1][0] * rem[0]) % MOD + (a[i - 1][1] * rem[2]) % MOD + (a[i - 1][2] * rem[1]) % MOD) % MOD;
				if (j == 1) a[i][1] = ((a[i - 1][0] * rem[1]) % MOD + (a[i - 1][1] * rem[0]) % MOD + (a[i - 1][2] * rem[2]) % MOD) % MOD;
				if (j == 2) a[i][2] = ((a[i - 1][0] * rem[2]) % MOD + (a[i - 1][1] * rem[1]) % MOD + (a[i - 1][2] * rem[0]) % MOD) % MOD;

			}
		}
	}
	cout << a[n - 1][0];
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