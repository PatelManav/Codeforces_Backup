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
ll arr[50][50];

void Input() {
	cin >> n >> m;
	for (ll i = 0; i < n; i++)
		for (ll j = 0; j < m; j++)
			cin >> arr[i][j];
}

void Solve() {
	ll brr[50][50] = {0};
	vector<pll> ans;
	for (ll i = 0; i < n - 1; i++) {
		for (ll j = 0; j < m - 1; j++) {
			if (arr[i][j] == 1 and arr[i + 1][j] == 1 and arr[i][j + 1] == 1 and arr[i + 1][j + 1] == 1) {
				brr[i][j] = brr[i + 1][j] = brr[i + 1][j + 1] = brr[i][j + 1] = 1;
				ans.pb({i + 1, j + 1});
			}
		}
	}

	for (ll i = 0; i < n; i++)
		for (ll j = 0; j < m; j++)
			if (arr[i][j] != brr[i][j]) {
				cout << -1;
				return;
			}

	cout << ans.size() << endl;
	for (auto it : ans) cout << it.f << " " << it.s << endl;
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