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
ll arr[size_1d];

void Input() {
	cin >> n;
	for (ll i = 0; i < n; i++)
		cin >> arr[i];
}

void Solve() {
	ll ans[n + 1] = {0};
	ans[1] = arr[0];
	for (ll i = 1; i < n; i++) {
		if (arr[i] != arr[i - 1])ans[i + 1] = arr[i];
	}
	map<ll, ll>mp;
	for (ll i = 1; i <= n; i++)mp[i] = 1;
	for (ll i = 1; i <= n; i++)mp[ans[i]] = 0;
	vll idx;
	for (auto it : mp)if (it.s == 1)idx.pb(it.f);
	sort(all(idx));
	ll t = 0;
	for (ll i = 1; i <= n; i++)if (ans[i] == 0)ans[i] = idx[t], t++;
	ll chk[n] = {0};
	chk[0] = ans[1];
	for (ll i = 1; i < n; i++)chk[i] = max(chk[i - 1], ans[i + 1]);
	for (ll i = 0; i < n; i++)if (chk[i] != arr[i]) {cout << -1 << endl; return;}
	for (ll i = 1; i <= n; i++)cout << ans[i] << " ";
	cout << endl;
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