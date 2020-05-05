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

ll N;
ll arr[size_1d];
unordered_map<ll, ll> mp;

void Input() {
	cin >> N;
	for (ll i = 0; i < N; i++)
		cin >> arr[i];
}

void Solve() {
	if (arr[0] != 25) {
		cout << "NO";
		return;
	}

	for (ll i = 0; i < N; i++) {
		if (arr[i] == 50) {
			if (mp[25]) {
				mp[25]--;
			}
			else {
				cout << "NO";
				return;
			}
		}
		else if (arr[i] == 100) {
			if (mp[50] and mp[25]) {
				mp[50]--, mp[25]--;
			}
			else if (mp[25] >= 3) {
				mp[25] -= 3;
			}
			else {
				cout << "NO";
				return;
			}
		}

		mp[arr[i]]++;
	}

	cout << "YES";

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