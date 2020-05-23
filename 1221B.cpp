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

void Input() {
	cin >> n;
}

void Solve() {
	char arr[n][n];
	for (ll i = 0; i < n; i++)
		for (ll j = 0; j < n; j++)
			arr[i][j] = 'W';
	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < n; j++) {
			if ((i + j) % 2 == 0) arr[i][j] = 'B';
		}
	}

	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < n; j++) cout << arr[i][j];
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