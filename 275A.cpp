/*May The Force Be With Me*/
#include <bits/stdc++.h>
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
#define mem(a,val) memset(a,val,sizeof(a))
//Snippets: bigint, bsearch, graph, splitstring, segtree, delta

ll dr[5] = {0, -1, +1, 0, 0};
ll dc[5] = {0, 0, 0, -1, +1};

using namespace std;

ll arr[3][3], ans[3][3];

void Input() {
	for (ll i = 0; i < 3; i++) {
		for (ll j = 0; j < 3; j++) {
			ans[i][j] = 1;
		}
	}
	for (ll i = 0; i < 3; i++)
		for (ll j = 0; j < 3; j++)
			cin >> arr[i][j];
}

void Solve() {
	for (ll i = 0; i < 3; i++) {
		for (ll j = 0; j < 3; j++) {
			for (ll k = 0; k < 5; k++) {
				if (i + dr[k] < 0 or i + dr[k] >= 3 or j + dc[k] < 0 or j + dc[k] >= 3) {
					continue;
				}

				if (arr[i][j] % 2 == 1) {
					ans[i + dr[k]][j + dc[k]] = 1 - ans[i + dr[k]][j + dc[k]];
				}
			}
		}
	}

	for (ll i = 0; i < 3; i++) {
		for (ll j = 0; j < 3; j++) {
			cout << ans[i][j];
		}
		cout << endl;
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