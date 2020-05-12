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

ll a, b, x;

void Input() {
	cin >> a >> b >> x;
}

void Solve() {
	if (x % 2 == 0) {
		if (a > b) {
			for (ll i = 0; i < x / 2; i++)
				cout << "01";
			for (ll i = 0; i < b - x / 2; i++)
				cout << "1";
			for (ll i = 0; i < a - x / 2; i++)
				cout << "0";
		}
		else {
			for (ll i = 0; i < x / 2; i++)
				cout << "10";
			for (ll i = 0; i < a - x / 2; i++)
				cout << "0";
			for (ll i = 0; i < b - x / 2; i++)
				cout << "1";
		}
	}
	else {
		if (a > b) {
			for (ll i = 0; i < x / 2; i++)
				cout << "01";
			for (ll i = 0; i < a - x / 2; i++)
				cout << "0";
			for (ll i = 0; i < b - x / 2; i++)
				cout << "1";
		}
		else {
			for (ll i = 0; i < x / 2; i++)
				cout << "10";
			for (ll i = 0; i < b - x / 2; i++)
				cout << "1";
			for (ll i = 0; i < a - x / 2; i++)
				cout << "0";
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