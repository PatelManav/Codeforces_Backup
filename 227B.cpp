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
//Snippets: bigint, bsearch, graph, splitstring, segtree, delta

using namespace std;

ll N, Q;
ll arr[size_1d];
unordered_map<ll, ll> mp;

void Input() {
	cin >> N, mp.clear();
	for (ll i = 0; i < N; i++) {
		cin >> arr[i];
		mp[arr[i]] = i;
	}
}

void Solve() {
	ll V, P;
	V = P = 0;
	cin >> Q;
	while (Q--) {
		ll d;
		cin >> d;
		V += (mp[d] + 1);
		P += (N - mp[d]);
	}

	cout << V << " " << P;
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