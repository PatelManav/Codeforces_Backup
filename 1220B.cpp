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

ll n;
ll arr[size_2d][size_2d];

void Input() {
	cin >> n;
	for (ll i = 0; i < n; i++)
		for (ll j = 0; j < n; j++)
			cin >> arr[i][j];
}

void Solve() {
	ll ans[n];
	for (ll i = 0; i < n; i++) {
		ll x = 0, y = 0;
		while (x == i)x++;
		while (y == i or y == x)y++;
		ans[i] = sqrt(arr[i][x] * arr[i][y] / arr[x][y]);
	}
	for (ll i = 0; i < n; i++) cout << ans[i] << " ";
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