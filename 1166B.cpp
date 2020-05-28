/*May The Force Be With Me*/
#include <bits/stdc++.h>
#include <stdio.h>
#include <ctype.h>
#pragma GCC optimize ("Ofast")
#define ll long long
#define MOD 1000000007
#define endl "\n"
#define vll vector<long long>
#define mll map<long long,long long>
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
	bool f = false;
	ll x, y;
	for (ll i = 1; i <= n; i++) {
		if (n % i == 0) {
			if (i >= 5 and n / i >= 5) {f = true, x = i, y = n / i;};
		}
	}

	if (!f)cout << -1;
	else {
		char arr[5] = {'a', 'e', 'i', 'o', 'u'};
		char v[x][y];
		ll st = 0;
		for (ll i = 0; i < x; i++) {
			ll t = st;
			for (ll j = 0; j < y; j++) {
				v[i][j] = arr[t];
				t++;
				t %= 5;
			}
			st++;
			st %= 5;
		}
		ll t = 0;
		for (ll i = 0; i < x; i++) {
			for (ll j = 0; j < y; j++) {
				cout << v[i][j];
			}
		}
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