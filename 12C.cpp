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

ll n, m;

void Input() {
	cin >> n >> m;
}

void Solve() {
	vll a(n);
	for (ll i = 0; i < n; i++) cin >> a[i];
	map<string, ll>mp;
	while (m--) {
		string s; cin >> s;
		mp[s]++;
	}
	vll b;
	for (auto it : mp)b.pb(it.s);
	sort(rall(b));
	ll x = 0, y = 0;
	sort(all(a));
	for (ll i = 0; i < b.size(); i++)x += b[i] * a[i];
	sort(rall(a));
	for (ll i = 0; i < b.size(); i++)y += b[i] * a[i];
	cout << x << " " << y;
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