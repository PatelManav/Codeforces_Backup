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

ll n, m, k;

void Input() {
	cin >> n >> m >> k;
}

void Solve() {
	vll a(n), b(n);
	for (ll i = 0; i < n; i++) cin >> a[i];
	b = a;
	sort(rall(b));
	ll s = 0, t = 0;
	mll mp;
	vll ans;
	for (ll i = 0; i < m * k; i++)s += b[i], mp[b[i]]++;
	for (ll i = 0; i < n; i++) {
		if (mp[a[i]] > 0)mp[a[i]]--, t++;
		if (mp[a[i]] == 0)mp.erase(a[i]);
		if (t == m) {ans.pb(i + 1); t = 0;}
	}
	cout << s << endl;
	for (ll i = 0; i < k - 1; i++)cout << ans[i] << " ";

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