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

ll n, k;

void Input() {
	cin >> n >> k;
}

void Solve() {
	vll a(k);
	for (ll i = 0; i < k; i++) cin >> a[i];
	ll ans = n;
	if (n == 2) ans += 2;
	else if (n >= 3) ans += (n - 2) * 2 + 2;
	ll b[n + 1] = {0}, c[n + 1] = {0};
	for (auto it : a)b[it] = 1;
	map<pll, ll> mp;
	for (ll i = 0; i <= n; i++) ans -= b[i];
	for (auto it : a) {
		if (n == 1)continue;
		c[it] = 1;
		if (it == 1 and c[2] == 1 and !mp.count({2, 1}))ans--, mp[ {2, 1}] = 1;
		else if (it == n and c[n - 1] == 1 and !mp.count({n - 1, n}))ans--, mp[ {n - 1, n}] = 1;
		else {
			if (c[it - 1] == 1 and !mp.count({it - 1, it}))ans--, mp[ {it - 1, it}] = 1;
			if (c[it + 1] == 1 and !mp.count({it + 1, it}))ans--, mp[ {it + 1, it}] = 1;
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