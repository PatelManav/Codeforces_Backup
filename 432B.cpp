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
vector<pll> arr;
map<ll, ll> mp_hm;

void Input() {
	cin >> N, arr.resize(N);
	for (ll i = 0; i < N; i++) {
		cin >> arr[i].f >> arr[i].s;
		mp_hm[arr[i].f]++;
	}
}

void Solve() {
	for (ll i = 0; i < N; i++) {
		ll hm = 0, ay = 0;
		hm = (N - 1) + mp_hm[arr[i].s];
		ay = 2 * (N - 1) - hm;
		cout << hm << " " << ay << endl;
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