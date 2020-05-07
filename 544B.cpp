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

ll n, k;

void Input() {
	cin >> n >> k;
}

void Solve() {
	if (k > (n * n + 1) / 2) {
		cout << "NO";
		return;
	}
	cout << "YES\n";

	bool prev_L = false;

	for (ll i = 0; i < n; i++) {
		if (i % 2 == 0)
			prev_L = false;
		else
			prev_L = true;
		for (ll j = 0; j < n; j++) {
			if (!prev_L and k) {
				k--;
				cout << "L";
			}
			else {
				cout << "S";
			}
			prev_L = !prev_L;
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