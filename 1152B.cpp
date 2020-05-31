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
	vll a;
	ll t = 0, z = 40;
	while (z--) {
		double l = log2(n + 1);
		if (l == floor(l))break;
		t++;
		if (t % 2 == 0) {n++; continue;}
		ll r = -1;
		for (ll i = 20; i >= 0; i--) if ((n >> i) & 1) {r = i; break;}
		if (1 << r != n)r++;
		n = n ^ ((1 << r) - 1);
		a.pb(r);
	}
	cout << t << endl;
	for (auto it : a)cout << it << " ";
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