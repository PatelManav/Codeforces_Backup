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
	for (ll i = 0; i < n; i++) cin >> a[i];
	sort(all(a));
	mll mp;
	vll b, c;
	for (ll i = 0; i < n; i++) {
		if (!mp.count(a[i])) {
			b.pb(a[i]);
			mp[a[i]] = 1, a[i] = -1;
		}
	}
	for (ll i = 0; i < n; i++) if (a[i] != -1)c.pb(a[i]);
	if (c.size()) {for (ll i = 0; i < c.size() - 1; i++) if (c[i] >= c[i + 1]) {cout << "NO"; return;}}
	cout << "YES\n" << b.size() << endl;
	for (auto it : b)cout << it << " ";
	cout << endl << c.size() << endl;
	if (c.size()) {
		reverse(all(c));
		for (auto it : c)cout << it << " ";
	}
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