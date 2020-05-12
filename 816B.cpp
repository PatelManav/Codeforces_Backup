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

ll n, k, q;
ll arr[size_1d] = {0};

void Input() {
	cin >> n >> k >> q;
	for (ll i = 0; i < n; i++) {
		ll l, r;
		cin >> l >> r;
		arr[l]++;
		arr[r + 1]--;
	}
	for (ll i = 1; i <= 200000; i++)
		arr[i] = arr[i - 1] + arr[i];
	for (ll i = 1; i <= 200000; i++) {
		if (arr[i] < k)
			arr[i] = 0;
		else
			arr[i] = 1;
	}
	for (ll i = 1; i <= 200000; i++)
		arr[i] = arr[i - 1] + arr[i];
}

void Solve() {
	while (q--) {
		ll l, r;
		cin >> l >> r;
		cout << arr[r] - arr[l - 1] << endl;
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