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
	n *= 2;
}

void Solve() {
	vll a(n);
	for (ll i = 0; i < n; i++) cin >> a[i];
	vll o, e;
	for (ll i = 0; i < n; i++) {
		if (a[i] % 2)o.pb(i);
		else e.pb(i);
	}
	if (e.size() % 2 and o.size() % 2)o.pop_back(), e.pop_back();
	else if (e.size() >= o.size()) e.pop_back(), e.pop_back();
	else if (o.size() > e.size()) o.pop_back(), o.pop_back();
	if (o.size())for (ll i = 0; i < o.size() - 1; i += 2) cout << o[i] + 1 << " " << o[i + 1] + 1 << endl;
	if (e.size())for (ll i = 0; i < e.size() - 1; i += 2) cout << e[i] + 1 << " " << e[i + 1] + 1 << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll T = 1;
	cin >> T;
	//ll t = 1;
	while (T--) {
		Input();
		//cout << "Case " << t << ": ";
		Solve();
		//t++;
	}
	return 0;
}