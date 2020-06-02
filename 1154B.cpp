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
	set<ll> b;
	for (ll i = 0; i < n; i++)b.insert(a[i]);
	vll c;
	for (auto it : b)c.pb(it);
	sort(all(c));
	if (b.size() == 1)cout << 0;
	else if (b.size() == 2) {
		ll d = abs(c[1] - c[0]);
		if (d % 2 == 0)d /= 2;
		cout << d;
	}
	else if (b.size() == 3) {
		if (abs(c[0] - c[1]) == abs(c[1] - c[2]))cout << abs(c[1] - c[2]);
		else cout << -1;
	}
	else cout << -1;
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