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

ll a, b, c, d, e, f;

void Input() {
	cin >> a >> b >> c >> d >> e >> f;
}

void Solve() {
	ll sol = 0;
	for (ll i = 0; i <= min(a, d); i++) {
		ll ans = i * e;
		ll A = a, B = b, C = c, D = d;
		D -= i;
		ans += min(B, min(C, D)) * f;
		sol = max(sol, ans);
	}
	cout << sol;
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