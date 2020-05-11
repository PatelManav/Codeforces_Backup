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

ll n, m;
unordered_map<ll, vector<pair<string, ll> > > mp;

bool MC(pair<string, ll> p1, pair<string, ll> p2) {
	return p1.s > p2.s;
}

void Input() {
	cin >> n >> m;
	for (ll i = 0; i < n; i++) {
		string str;
		ll u, v;
		cin >> str >> u >> v;
		mp[u].push_back({str, v});
	}
}

void Solve() {
	for (ll i = 1; i <= m; i++) {
		sort(all(mp[i]), MC);
		if (mp[i].size() > 2) {
			if (mp[i][1].s == mp[i][2].s) {
				cout << "?\n";
				continue;
			}
		}
		cout << mp[i][0].f << " " << mp[i][1].f << endl;
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