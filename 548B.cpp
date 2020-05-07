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
#define f first
#define s second
#define inf INT_MAX
#define size_1d 10000000
#define size_2d 1000
//Snippets: bigint, bsearch, graph, splitstring, segtree, delta, sieve

using namespace std;

ll n, m, q;
ll arr[500][500];

void Input() {
	cin >> n >> m >> q;
	for (ll i = 0; i < n; i++)
		for (ll j = 0; j < m; j++)
			cin >> arr[i][j];
}

void Solve() {
	ll ans[n];
	for (ll i = 0; i < n; i++) {
		ll cur = 0, t_ans = 0;
		for (ll j = 0; j < m; j++) {
			if (arr[i][j] == 0)
				cur = 0;
			else
				cur++;
			t_ans = max(cur, t_ans);
		}
		ans[i] = t_ans;
	}

	while (q--) {
		ll i, j;
		cin >> i >> j;
		arr[i - 1][j - 1] = 1 - arr[i - 1][j - 1];
		ll cur = 0;
		ans[i - 1] = 0;
		for (ll x = 0; x < m; x++) {
			if (arr[i - 1][x] == 0)
				cur = 0;
			else
				cur++;
			ans[i - 1] = max(cur, ans[i - 1]);
		}
		ll anS = 0;
		for (ll i = 0; i < n; i++)
			anS = max(anS, ans[i]);
		cout << anS << endl;
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