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

ll N;
ll arr1[size_1d], arr2[size_1d];
map<ll, ll> mp1, mp2;

void Input() {
	cin >> N;
	for (ll i = 0; i < N; i++) {
		cin >> arr1[i];
		mp1[i] = mp1[i - 1] + arr1[i];
		arr2[i] = arr1[i];
	}
	sort(arr2, arr2 + N);
	for (ll i = 0; i < N; i++) {
		mp2[i] = mp2[i - 1] + arr2[i];
	}
}

void Solve() {
	ll q;
	cin >> q;
	while (q--) {
		ll t, l, r;
		cin >> t >> l >> r;
		if (t == 1) {
			cout << mp1[r - 1] - mp1[l - 2] << endl;
		}
		else {
			cout << mp2[r - 1] - mp2[l - 2] << endl;
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