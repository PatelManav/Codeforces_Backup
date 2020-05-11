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

ll n, k;
ll arr[size_1d];

bool MC(ll a, ll b) {
	return a % 10 > b % 10;
}

void Input() {
	cin >> n >> k;
	for (ll i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n, MC);
}

void Solve() {
	for (ll i = 0; i < n; i++) {
		if (arr[i] == 100)
			continue;
		ll d = min(k, 10 - (arr[i] % 10));
		arr[i] += d;
		k -= d;
		if (k <= 0)
			break;
	}

	if (k > 0) {
		for (ll i = 0; i < n; i++) {
			if (arr[i] == 100)
				continue;
			ll d = min(k, 100 - arr[i]);
			arr[i] += d;
			k -= d;
			if (k <= 0)
				break;
		}
	}

	ll ans = 0;
	for (ll i = 0; i < n; i++)
		ans += arr[i] / 10;

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