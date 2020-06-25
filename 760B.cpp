/*May The Force Be With Me*/
#include <bits/stdc++.h>
#include <stdio.h>
#include <ctype.h>
#pragma GCC optimize ("Ofast")
#define ll unsigned long long
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
	m -= n;
	ll l = 1, r = 10e9, midd = 0;
	while (l <= r) {
		ll mid = l + (r - l) / 2;
		ll d = mid * (mid + 1) / 2;
		if (mid > k) d -= (mid - k) * (mid - k + 1) / 2;
		d += mid * (mid - 1) / 2;
		if (k + mid - 1 > n) d -= (k + mid - 1 - n) * (k + mid - n) / 2;
		if (m >= d) midd = max(midd, mid), l = mid + 1;
		else r = mid - 1;
	}
	cout << midd + 1;
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