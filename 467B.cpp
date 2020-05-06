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

ll n, m, k;
vll arr;
map<ll, ll> mp;

void Input() {
	cin >> n >> m >> k, arr.resize(m + 1);
	for (ll i = 0; i < m + 1; i++) {
		cin >> arr[i];
	}
}

void Solve() {
	ll J = 0;
	while (arr[m] > 0) {
		if (arr[m] % 2 == 1)
			mp[J] = 1;
		arr[m] /= 2;
		J++;
	}
	ll ans = 0, ed = J;
	for (ll i = 0; i < m; i++) {
		ll cnt = 0, j = 0;
		while (arr[i] > 0) {
			if (arr[i] % 2 == 1 and mp[j] == 0)
				cnt++;
			else if (mp[j] == 1 and arr[i] % 2 == 0)
				cnt++;
			arr[i] /= 2;
			j++;
		}
		while (j < ed) {
			if (mp[j] == 1)
				cnt++;
			j++;
		}
		if (cnt <= k) {
			ans++;
		}
	}
	cout << ans;
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