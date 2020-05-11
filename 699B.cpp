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
//Snippets: bigint, bsearch, graph, splitstring, segtree, delta, sieve, fastexp

using namespace std;

ll n, m, cnt = 0;
char arr[size_2d][size_2d];
unordered_map<ll, ll> mp1, mp2;

void Input() {
	cin >> n >> m;
	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < m; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == '*') {
				cnt++;
				mp1[i]++;
				mp2[j]++;
			}
		}
	}
}

void Solve() {
	ll cur;
	for (ll i = 0; i < n ; i++) {
		for (ll j = 0; j < m; j++) {
			cur = mp1[i] + mp2[j];
			if (arr[i][j] == '*')
				cur--;

			if (cur == cnt) {
				cout << "YES\n";
				cout << i + 1 << " " << j + 1;
				return;
			}
		}
	}

	cout << "NO";
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