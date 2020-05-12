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

ll n, m;
ll arr[size_1d];

void Input() {
	cin >> n >> m;
	for (ll i = 0; i < n; i++)
		cin >> arr[i];
}

void Solve() {
	while (m--) {
		ll l, r, x;
		cin >> l >> r >> x;
		ll cnt = 0;
		for (ll i = l - 1; i < r; i++)
			if (arr[i] < arr[x - 1])
				cnt++;

		if (arr[l + cnt - 1] == arr[x - 1])
			cout << "Yes\n";
		else
			cout << "No\n";
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