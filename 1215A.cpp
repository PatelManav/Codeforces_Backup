/*May The Force Be With Me*/
#include <bits/stdc++.h>
#include <stdio.h>
#include <ctype.h>
#pragma GCC optimize ("Ofast")
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

ll a1, a2, k1, k2, n;

void Input() {
	cin >> a1 >> a2 >> k1 >> k2 >> n;
}

void Solve() {
	ll D = max(0ll, n - (a1 * k1 - a1 + a2 * k2 - a2));
	ll mn = min(D, a1 + a2), mx;
	if (k2 > k1) {
		mx = min(a1, n / k1);
		D = n - min(a1, n / k1) * k1;
		mx += min(a2, D / k2);
	} else {
		mx = min(a2, n / k2);
		D = n - min(a2, n / k2) * k2;
		mx += min(a1, D / k1);
	}

	cout << mn << " " << mx;
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