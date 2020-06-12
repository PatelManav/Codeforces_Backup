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

ll n;

void Input() {
	cin >> n;
}

void Solve() {
	vll a(n);
	for (ll i = 0; i < n; i++) cin >> a[i];
	vector<pll> ans;
	for (ll i = 0; i < n; i++) {
		ll l = -1, r = -1;
		bool f = false;
		while (a[i] % 2 == 0)a[i] /= 2, f = true;
		if (a[i] > 1 and f) l = 2, r = a[i];
		else if (a[i] > 1) {
			ll t = 0, x = 0;
			for (ll j = 2; j * j <= a[i]; j++) {
				if (a[i] % j == 0 and t == 0) t = j, x = t;
				else if (a[i] % j == 0) {
					t = __gcd(t, j);
					if (t == 1) {
						l = x, r = j;
						break;
					}
				}
			}
		}
		ans.pb({l, r});
	}
	for (auto it : ans)cout << it.f << " ";
	cout << endl;
	for (auto it : ans)cout << it.s << " ";
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