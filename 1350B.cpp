/*May The Force Be With Me*/
#include <bits/stdc++.h>
#include <stdio.h>
#include <ctype.h>
#pragma GCC optimize ("Ofast")
#define ll long long
#define MOD 1000000007
#define endl "\n"
#define vll vector<long long>
#define mll map<long long,long long>
#define pll pair<long long, long long>
#define all(c) c.begin(),c.end()
#define rall(c) c.rbegin(),c.rend()
#define pb push_back
#define f first
#define s second
#define inf INT_MAX
#define size_1d 10000000
#define size_2d 1000
//Snippets: graph, segtree, delta, sieve, fastexp

using namespace std;

ll n;

void Input() {
	cin >> n;
}

void Solve() {
	vll a(n + 1);
	for (ll i = 1; i <= n; i++) cin >> a[i];
	mll mp;
	for (ll i = 1; i <= n; i++) mp[i] = 1;
	for (ll i = 2; i <= n; i++) {
		if (a[1] < a[i])mp[i] = max(mp[i], mp[1] + 1);
		for (ll j = 2; j * j <= i; j++) {
			if (i % j == 0) {
				if (a[i / j] < a[i]) mp[i] = max(mp[i], mp[i / j] + 1);
				if (a[j] < a[i]) mp[i] = max(mp[i], mp[j] + 1);
			}
		}
	}
	ll ans = 0;
	for (ll i = 1; i <= n; i++) ans = max(mp[i], ans);
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