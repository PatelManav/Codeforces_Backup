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
//Snippets: bigint, bsearch, graph, splitstring, segtree, delta, sieve

using namespace std;

ll n;
ll arr[size_1d];
map<ll, ll> mp;
vll idx, idx_to;

void Input() {
	cin >> n;
	for (ll i = 0; i < n; i++) {
		cin >> arr[i];
		mp[arr[i]] = 1;
		if (arr[i] == 0)
			idx_to.push_back(i + 1);
	}
}

void Solve() {
	for (ll i = 1; i <= n; i++)
		if (mp[i] == 0)
			idx.push_back(i);

	for (ll i = 0; i < idx_to.size(); i++)
		arr[idx_to[i] - 1] = idx[i];

	ll t = 0;
	for (ll i = 0; i < n; i++) {
		if (arr[i] == i + 1) {
			swap(arr[i], arr[idx_to[(t + 1) % idx_to.size()] - 1]);
		}
		if (i + 1 == idx_to[t]) {
			t++;
		}
	}

	for (ll i = 0; i < n; i++)
		cout << arr[i] << " ";
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