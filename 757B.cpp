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
map<ll, ll> mp;

void PF(ll x) {
	if (x % 2 == 0)
		mp[2]++;
	while (x % 2 == 0) {
		x /= 2;
	}
	for (ll i = 3; i <= sqrt(x); i += 2) {
		if (x % i == 0)
			mp[i]++;
		while (x % i == 0) {
			x /= i;
		}
	}
	if (x > 2)
		mp[x]++;
}

ll n;
ll arr[size_1d];

void Input() {
	cin >> n;
	for (ll i = 0; i < n; i++)
		cin >> arr[i];
}

void Solve() {
	for (ll i = 0; i < n; i++) {
		PF(arr[i]);
	}
	ll ans = 1;
	for (auto it : mp) {
		ans = max(ans, it.s);
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