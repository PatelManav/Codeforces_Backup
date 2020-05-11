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

ll n;
char arr[size_1d];

void Input() {
	cin >> n;
	for (ll i = 0; i < n; i++)
		cin >> arr[i];
}

void Solve() {
	ll ans = 0, r1 = 0, b1 = 0, r2 = 0, b2 = 0;
	char st = 'r';
	for (ll i = 0; i < n; i++) {
		if (i % 2 == 0) {
			if (arr[i] == 'r')
				b2++;
			if (arr[i] == 'b')
				r1++;
		}
		else {
			if (arr[i] == 'b')
				r2++;
			if (arr[i] == 'r')
				b1++;
		}
	}
	ans = min(max(r2, b2), max(r1, b1));
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