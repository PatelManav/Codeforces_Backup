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
#define size_2d 10000
//Snippets: bigint, bsearch, graph, splitstring, segtree, delta, sieve

using namespace std;

ll n, m;
ll arr1[size_1d], arr2[size_1d];

void Input() {
	cin >> n >> m;
	for (ll i = 0; i < n; i++)
		cin >> arr1[i];
	for (ll i = 0; i < m; i++)
		cin >> arr2[i];
	sort(arr2, arr2 + m);
	sort(arr1, arr1 + n);
}

void Solve() {
	ll ans = 0;
	for (ll i = 0; i < n; i++) {
		bool flg = false;
		for (ll j = 0; j < m; j++) {
			if (arr2[j] >= arr1[i]) {
				flg = true;
				arr2[j] = -1;
				break;
			}
		}

		if (!flg)
			ans++;
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