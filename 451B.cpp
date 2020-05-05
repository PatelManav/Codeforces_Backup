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
ll arr[size_1d], brr[size_1d];

void Input() {
	cin >> N;
	for (ll i = 0; i < N; i++) {
		cin >> arr[i];
		brr[i] = arr[i];
	}
	sort(brr, brr + N);
}

void Solve() {
	ll l = -1, r = -1;
	for (ll i = 0; i < N; i++) {
		if (arr[i] != brr[i]) {
			r = i;
		}
	}
	for (ll i = N - 1; i >= 0; i--) {
		if (arr[i] != brr[i]) {
			l = i;
		}
	}

	if (l == -1 and r == -1) {
		cout << "yes\n1 1";
		return;
	}

	reverse(arr + l, arr + r + 1);


	for (ll i = 0; i < N; i++) {
		if (arr[i] != brr[i]) {
			cout << "no";
			return;
		}
	}

	cout << "yes\n" << l + 1 << " " << r + 1;

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