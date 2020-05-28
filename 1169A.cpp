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
#define pb push_back
#define f first
#define s second
#define inf INT_MAX
#define size_1d 10000000
#define size_2d 1000
//Snippets: graph, segtree, delta, sieve, fastexp

using namespace std;

ll n, a, x, b, y;

void Input() {
	cin >> n >> a >> x >> b >> y;
}

void Solve() {
	vll arr, brr;
	if (x < a) {
		for (ll i = a; i <= n; i++)arr.pb(i);
		for (ll i = 1; i <= x; i++)arr.pb(i);
	}
	else {
		for (ll i = a; i <= x; i++)arr.pb(i);
	}

	if (y > b) {
		for (ll i = b; i >= 1; i--)brr.pb(i);
		for (ll i = n; i >= y; i--)brr.pb(i);
	}
	else {
		for (ll i = b; i >= y; i--)brr.pb(i);
	}

	for (ll i = 0; i < min(arr.size(), brr.size()); i++) {
		if (arr[i] == brr[i]) {cout << "YES"; return;}
	}
	cout << "NO";
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