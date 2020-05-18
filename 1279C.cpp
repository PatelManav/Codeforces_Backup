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

ll n, m;
ll arr[size_1d], brr[size_1d];

void Input() {
	cin >> n >> m;
	for (ll i = 0; i < n; i++)
		cin >> arr[i];
	for (ll i = 0; i < m; i++)
		cin >> brr[i];
}

void Solve() {
	map<ll, ll> mp;
	ll pref = inf, ans = 0;
	for (ll i = 0; i < m; i++) mp[brr[i]] = i + 1;
	for (ll i = n - 1; i >= 0; i--) {
		if (mp[arr[i]] == 0) continue;
		if (mp[arr[i]] < pref) {
			ans += 2 * (i - (mp[arr[i]] - 1)) + 1;
			if (pref == inf) ans += (m - mp[arr[i]]);
			else ans += (pref - mp[arr[i]] - 1);
			pref = mp[arr[i]];
		}
	}
	cout << ans << endl;
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