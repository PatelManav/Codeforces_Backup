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
	if (n == 1)cout << 1;
	else if (n == 2)cout << 2;
	else if (n == 3)cout << 6;
	else if (n % 2) cout << n*(n - 1)*(n - 2);
	else {
		ll ans = 0;
		for (ll i = n; i >= n - 100 and i >= 1; i--) {
			for (ll j = i; j >= n - 100 and j >= 1; j--) {
				for (ll k = j; k >= n - 100 and k >= 1; k--) {
					ll d = i * j / __gcd(i, j);
					d = d * k / __gcd(d, k);
					ans = max(ans, d);
				}
			}
		}
		cout << ans;
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