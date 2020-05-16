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
ll arr[size_1d], brr[size_1d];

void Input() {
	cin >> n;
	for (ll i = 0; i < n; i++)
		cin >> arr[i];
	for (ll i = 0; i < n; i++)
		cin >> brr[i];
}

void Solve() {
	ll idx_1 = n, idx_0 = n, idx_n = n;
	for (ll i = 0; i < n; i++) {
		if (arr[i] == 1) idx_1 = min(idx_1, i);
		if (arr[i] == 0) idx_0 = min(idx_0, i);
		if (arr[i] == -1) idx_n = min(idx_n, i);
	}

	for (ll i = n - 1; i >= 0; i--) {
		if (arr[i] < brr[i] and idx_1 >= i) {
			cout << "NO\n";
			return;
		}
		if (arr[i] > brr[i] and idx_n >= i) {
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
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