/*May The Force Be With Me*/
#include <bits/stdc++.h>
#include <stdio.h>
#include <ctype.h>
#define ll long long
#define MOD 1000000007
#define endl "\n"
#define vll vector<long long>
#define pll pair<long long, long long>
#define all(c) c.begin(),c.end()
#define pb push_back
#define f first
#define s second
#define inf INT_MAX
#define size_1d 10000000
#define size_2d 1000
//Snippets: graph, segtree, delta, sieve, fastexp

using namespace std;

ll n, m;
ll arr[size_2d][size_2d] = {0}, r[size_2d], c[size_2d];

void Input() {
	cin >> n >> m;
	for (ll i = 0; i < n; i++)
		cin >> r[i];
	for (ll i = 0; i < m; i++)
		cin >> c[i];
}

ll FastExp(ll a, ll b) {
	ll ans = 1;
	while (b) {
		if (b & 1)
			ans = (ans * a) % MOD;
		a =	(a * a) % MOD;
		b >>= 1;
	}
	return (ans % MOD);
}

void Solve() {
	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < r[i]; j++) {
			arr[i][j] = 1;
		}
		if (r[i] < m) arr[i][r[i]] = -1;
	}
	for (ll i = 0; i < m; i++) {
		for (ll j = 0; j < c[i]; j++) {
			if (arr[j][i] == -1) {
				cout << 0 << endl;
				return;
			}
			arr[j][i] = 1;
		}
		if (c[i] < n) {
			if (arr[c[i]][i] == 1) {
				cout << 0 << endl;
				return;
			}
			arr[c[i]][i] = -1;
		}
	}
	ll u = 0;
	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < m; j++) {
			if (arr[i][j] == 0) u++;
		}
	}
	cout <<	FastExp(2, u);
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