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
#define size_2d 1000
//Snippets: bigint, bsearch, graph, splitstring, segtree, delta, sieve, fastexp

using namespace std;

ll m, b;

void Input() {
	cin >> m >> b;
}

void Solve() {
	//m(b-y) = x, x = mb, y = b;
	ll ans = 0;
	for (ll i = 0; i <= b; i++) {
		ll j = m * (b - i);
		ll t_ans = (j + 1) * i * (i + 1) / 2 + (i + 1) * j * (j + 1) / 2;
		ans = max(ans, t_ans);
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