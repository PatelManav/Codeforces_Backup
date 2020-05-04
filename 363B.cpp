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

ll N, K;
ll arr[size_1d];
map<ll, ll> mp;

void Input() {
	cin >> N >> K;
	for (ll i = 0; i < N; i++) {
		cin >> arr[i];
		mp[i] = mp[i - 1] + arr[i];
	}
}

void Solve() {
	ll mn = INT_MAX, idx = 0;
	for (ll i = 0; i < N; i++) {
		if (i + K - 1 < N) {
			if (mn > (mp[i + K - 1] - mp[i - 1])) {
				mn = mp[i + K - 1] - mp[i - 1];
				idx = i;
			}
		}
	}

	cout << idx + 1;
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