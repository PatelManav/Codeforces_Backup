/*May The Force Be With Me*/
#include <bits/stdc++.h>
#include <stdio.h>
#include <ctype.h>
#pragma GCC optimize ("Ofast")
#define ll long long
#define MOD 998244353
#define endl "\n"
#define vll vector<long long>
#define mll map<long long,long long>
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

void Input() {
	cin >> n;
}

void Solve() {
	vll arr(n), brr(n), val(n);
	for (ll i = 0; i < n; i++) cin >> arr[i];
	for (ll i = 0; i < n; i++) cin >> brr[i];
	for (ll i = 0; i < n; i++) val[i] = (i + 1) * (n - i) * arr[i];
	sort(val.rbegin(), val.rend()), sort(all(brr));
	ll a = 0;
	for (ll i = 0; i < n; i++) a = (a + (brr[i] * (val[i] % MOD)) % MOD) % MOD;
	cout << a;
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