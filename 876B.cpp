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

ll n, k, m;
ll arr[size_1d];
map<ll, vll> mp;

void Input() {
	cin >> n >> k >> m;
	for (ll i = 0; i < n; i++) {
		cin >> arr[i];
		mp[arr[i] % m].push_back(arr[i]);
	}
}

void Solve() {
	for (auto it : mp) {
		if (it.s.size() >= k) {
			cout << "Yes\n";
			for (ll i = 0; i < k; i++) {
				cout << it.s[i] << " ";
			}
			return;
		}
	}
	cout << "No";
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