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
//Snippets: delta, sieve, fastexp, dfs, bfs, dijkstra, floodfill

using namespace std;

ll l, r, x, y;

void Input() {
	cin >> l >> r >> x >> y;
}

void Solve() {
	ll z = y / x;
	ll ans = 0;
	if (y % x != 0)cout << 0;
	else {
		for (ll i = 1; i * i <= z; i++) {
			if (z % i == 0)
				if (l <= i * x and i * x <= r and l <= (z / i)*x and (z / i)*x <= r)
					if (__gcd(i, z / i) == 1)
						ans += 1 + (i != z / i);
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