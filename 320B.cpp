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
vector<pll> a;
map<ll, vll> mp;
mll vis;
bool f = false;
void dfs(ll s, ll t) {
	if (vis.count(s))return;
	vis[s] = 1;
	for (auto it : mp[s]) {
		if (it == t)f = true;
		dfs(it, t);
	}
}
void Input() {
	cin >> n;

}

void Solve() {
	while (n--) {
		ll d; cin >> d;
		if (d == 1) {
			ll x, y;
			cin >> x >> y;
			a.pb({x, y});
		}
		else if (d == 2) {
			ll u, v;
			cin >> u >> v;
			u--, v--;
			mp.clear(); vis.clear();
			for (ll i = 0; i < a.size(); i++) for (ll j = 0; j < a.size(); j++)
					if ((a[i].f > a[j].f and a[i].f < a[j].s) or (a[i].s > a[j].f and a[i].s < a[j].s)) mp[i].pb(j);
			f = false;
			dfs(u, v);
			if (f)cout << "YES\n";
			else cout << "NO\n";
		}
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