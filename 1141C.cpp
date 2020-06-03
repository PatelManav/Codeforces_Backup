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
	vll a(n);
	a[0] = 0;
	for (ll i = 1; i < n; i++) cin >> a[i];
	for (ll i = 1; i < n; i++) a[i] += a[i - 1];
	ll t = 1;
	for (ll i = 1; i < n; i++) {
		if (abs(a[i]) >= n or a[i] == 0) {cout << -1; return;}
		if (t + a[i] < 1 or t + a[i] > n) {
			if (a[i] < 0)t = 1 + abs(a[i]);
			else t = n - abs(a[i]);
		}
	}
	for (ll i = 1; i < n; i++) {
		if (t + a[i] < 1 or t + a[i] > n) {
			cout << -1; return;
		}
	}
	for (ll i = 1; i < n; i++)a[i] += t;
	a[0] = t;
	mll mp;
	for (ll i = 0; i < n; i++) {mp[a[i]]++; if (mp[a[i]] == 2) {cout << -1; return;}}
	for (ll i = 0; i < n; i++)cout << a[i] << " ";
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