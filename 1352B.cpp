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

ll n, k;

void Input() {
	cin >> n >> k;
}

void Solve() {
	if ((n - (k - 1)) > 0 and (n - (k - 1)) % 2 == 1) {
		cout << "YES\n";
		for (ll i = 0; i < k - 1; i++)
			cout << 1 << " ";
		cout << n - (k - 1) << endl;
	}
	else if ((n - 2 * (k - 1)) > 0 and (n - 2 * (k - 1)) % 2 == 0) {
		cout << "YES\n";
		for (ll i = 0; i < k - 1; i++)
			cout << 2 << " ";
		cout << n - 2 * (k - 1) << endl;
	}
	else
		cout << "NO\n";
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