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
#define pb push_back
#define f first
#define s second
#define inf INT_MAX
#define size_1d 10000000
#define size_2d 1000
//Snippets: graph, segtree, delta, sieve, fastexp

using namespace std;

ll n, m, c = 0;
vll g[1000000];
ll vis[1000000], siz[1000000];

void Input() {
	cin >> n >> m;
}

ll dfs(ll x) {
	if (vis[x])return 0;
	vis[x] = c;
	ll ans = (x >= n ? 0 : 1);
	for (auto it : g[x])ans += dfs(it);
	return ans;
}

void Solve() {
	for (ll i = 0; i < m; i++) {
		ll k; cin >> k;
		for (ll j = 0; j < k; j++) {
			ll d; cin >> d; d--;
			g[d].pb(i + n);
			g[i + n].pb(d);
		}
	}

	for (ll i = 0; i < n; i++) {
		if (!vis[i]) {c++, siz[c] = dfs(i);}
		cout << siz[vis[i]] << " ";
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