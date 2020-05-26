/*May The Force Be With Me*/
#include <bits/stdc++.h>
#include <stdio.h>
#include <ctype.h>
#pragma GCC optimize ("Ofast")
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
ll arr[2000];

void Input() {
	cin >> n;
	for (ll i = 0; i < n; i++)
		cin >> arr[i];
}

void Solve() {
	map<ll, ll>mp;
	ll ans = n - 1;
	for (ll i = 0; i < n; i++) {
		bool f = true;
		mp.clear();
		for (ll j = 0; j < i; j++) {
			mp[arr[j]]++;
			if (mp[arr[j]] == 2) {f = false; break;}
		}
		if (!f) continue;
		ll idx = n;
		for (ll j = n - 1; j >= i; j--) {
			mp[arr[j]]++;
			if (mp[arr[j]] == 1)idx = j;
			else break;
		}
		if (f) ans = min(ans, idx - i);
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