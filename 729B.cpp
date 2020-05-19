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

ll n, m;
ll arr[size_2d][size_2d];

void Input() {
	cin >> n >> m;
	for (ll i = 0; i < n; i++)
		for (ll j = 0; j < m; j++)
			cin >> arr[i][j];
}

void Solve() {
	map<ll, pll> mp_r, mp_c;
	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < m; j++) {
			if (arr[i][j] == 1) {
				if (!mp_r.count(i)) mp_r[i] = {j, j};
				else {
					mp_r[i].f = min(mp_r[i].f, j);
					mp_r[i].s = max(mp_r[i].s, j);
				}
				if (!mp_c.count(j)) mp_c[j] = {i, i};
				else {
					mp_c[j].f = min(mp_c[j].f, i);
					mp_c[j].s = max(mp_c[j].s, i);
				}
			}
		}
	}
	ll ans = 0;
	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < m; j++) {
			if (arr[i][j] == 0) {
				if (mp_r.count(i)) {
					if (mp_r[i].f < j) ans++;
					if (mp_r[i].s > j) ans++;
				}
				if (mp_c.count(j)) {
					if (mp_c[j].f < i) ans++;
					if (mp_c[j].s > i) ans++;
				}
			}
		}
	}
	cout << ans << endl;
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