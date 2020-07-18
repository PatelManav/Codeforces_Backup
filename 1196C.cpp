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
#define inf 100000
#define size_1d 10000000
#define size_2d 1000
//Snippets: delta, sieve, fastexp, dfs, bfs, dijkstra, floodfill

using namespace std;

ll n;

void Input() {
	cin >> n;
}

void Solve() {
	ll mxy = inf, mny = -inf, mxx = inf, mnx = -inf;
	while (n--) {
		ll x, y, f1, f2, f3, f4;
		cin >> x >> y >> f1 >> f2 >> f3 >> f4;
		if (!f1)mnx = max(mnx, x);
		if (!f2)mxy = min(mxy, y);
		if (!f3)mxx = min(mxx, x);
		if (!f4)mny = max(mny, y);
	}
	if (mxx < mnx or mxy < mny)cout << 0 << endl;
	else cout << 1 << " " << (mxx + mnx) / 2 << " " << (mxy + mny) / 2 << endl;
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