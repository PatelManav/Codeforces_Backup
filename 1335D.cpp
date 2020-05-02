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

using namespace std;

ll N;
char arr[9][9];

void Input() {
	for (ll i = 0; i < 9; i++) {
		for (ll j = 0; j < 9; j++) {
			cin >> arr[i][j];
		}
	}
}

void Solve() {
	for (ll i = 0; i < 9; i++) {
		for (ll j = 0; j < 9; j++) {
			if (arr[i][j] == '9') {
				arr[i][j] = '5';
			}
		}
	}

	for (ll i = 0; i < 9; i++) {
		for (ll j = 0; j < 9; j++) {
			cout << arr[i][j];
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
	cin >> T;
	//ll t = 1;
	while (T--) {
		Input();
		//cout << "Case " << t << ": ";
		Solve();
		//t++;
	}
	return 0;
}