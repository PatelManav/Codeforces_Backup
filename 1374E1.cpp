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

ll n, k;

void Input() {
	cin >> n >> k;
}

void Solve() {
	vector<pair<ll, pll>> a(n);
	for (ll i = 0; i < n; i++) cin >> a[i].f >> a[i].s.f >> a[i].s.s;
	sort(all(a));
	vll x, y, z;
	for (ll i = 0; i < n; i++) {
		pll p = {1, 1};
		if (a[i].s == p)x.pb(a[i].f);
		p = {0, 1};
		if (a[i].s == p)y.pb(a[i].f);
		p = {1, 0};
		if (a[i].s == p)z.pb(a[i].f);
	}
	ll sx = x.size(), sy = y.size(), sz = z.size();
	vll px(sx, 0), py(sy, 0), pz(sz, 0);
	if (x.size())px[0] = x[0];
	if (y.size())py[0] = y[0];
	if (z.size())pz[0] = z[0];
	for (ll i = 1; i < sx; i++)px[i] = px[i - 1] + x[i];
	for (ll i = 1; i < sy; i++)py[i] = py[i - 1] + y[i];
	for (ll i = 1; i < sz; i++)pz[i] = pz[i - 1] + z[i];
	ll ans = inf;
	for (ll i = -1; i < sx; i++) {
		if (i + 1 > k)break;
		ll d = k - (i + 1), u = 0;
		if (i != -1)u = px[i];
		if (d != 0 and d <= sy and d <= sz)u += py[d - 1] + pz[d - 1], d = 0;
		if (!d)ans = min(ans, u);
	}
	if (ans == inf)cout << -1 << endl;
	else cout << ans << endl;
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