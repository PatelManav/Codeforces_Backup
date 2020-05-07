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
#define f first
#define s second
#define inf INT_MAX
#define size_1d 10000000
#define size_2d 10000
//Snippets: bigint, bsearch, graph, splitstring, segtree, delta, sieve

using namespace std;

ll n, a, b, c , d;

void Input() {
	cin >> n >> a >> b >> c >> d;
}

void Solve() {
	ll ans = 0;
	for (ll x = 1; x <= n; x++) {
		ll y = x + b - c;
		ll w = x + a - d;
		ll z = y + a - d;

		if (y >= 1 and y <= n and w >= 1 and w <= n and z >= 1 and z <= n)
			ans++;
	}

	cout << ans*n;
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