/*May The Force Be With Me*/
#include <bits/stdc++.h>
#include <stdio.h>
#include <ctype.h>
#pragma GCC optimize ("Ofast")
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
char arr[size_2d][size_2d];

void Input() {
	cin >> n >> m;
	for (ll i = 0; i < n; i++)
		for (ll j = 0; j < m; j++)
			cin >> arr[i][j];
}

void Solve() {
	bool f = false;
	ll r = -1, c = -1;
	for (ll i = 1; i < n - 1; i++) {
		for (ll j = 1; j < m - 1; j++) {
			if ((arr[i][j] == '*') and (arr[i - 1][j] == '*') and (arr[i][j - 1] == '*') and (arr[i + 1][j] == '*') and (arr[i][j + 1] == '*')) {
				if (!f)f = true;
				else {cout << "NO\n"; return;}
				r = i, c = j;
			}
		}
	}
	if (c == -1 or r == -1 or !f) {cout << "NO\n"; return;}
	for (ll i = r; i < n; i++) {if (arr[i][c] == '*')arr[i][c] = '.'; else break;}
	for (ll i = r - 1; i >= 0; i--) {if (arr[i][c] == '*')arr[i][c] = '.'; else break;}
	for (ll i = c + 1; i < m; i++) {if (arr[r][i] == '*')arr[r][i] = '.'; else break;}
	for (ll i = c - 1; i >= 0; i--) {if (arr[r][i] == '*')arr[r][i] = '.'; else break;}
	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < m; j++) {
			if (arr[i][j] == '*') {cout << "NO\n"; return;}
		}
	}
	cout << "YES\n";
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