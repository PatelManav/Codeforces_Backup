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

ll n, k, m = 998244353;
void Input() {
	cin >> n >> k;
}

void Solve() {
	vll a(n), c;
	for (ll i = 0; i < n; i++) cin >> a[i];
	ll x = n, ans = 1, su = 0;
	mll mp;
	while (k--) {
		mp[x] = 1;
		su += x;
		x--;
	}
	for (ll i = 0; i < n; i++) if (mp[a[i]] == 1)c.pb(i);
	for (ll i = 0; i < c.size() - 1; i++) ans = (ans * (c[i + 1] - c[i])) % m;
	cout << su << " " << ans % m;
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