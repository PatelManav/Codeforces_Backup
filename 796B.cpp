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

ll n, m, k;
ll arr[size_1d];
map<ll, ll> mp;
void Input() {
	cin >> n >> m >> k;
	for (ll i = 0; i < m; i++) {
		ll d;
		cin >> d;
		mp[d]++;
	}
}

void Solve() {
	ll bone = 1;
	while (k--) {
		if (mp[bone] == 1) {
			cout << bone;
			return;
		}
		ll u, v;
		cin >> u >> v;
		if (u == bone)
			bone = v;
		else if (v == bone)
			bone = u;
	}
	cout << bone;
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