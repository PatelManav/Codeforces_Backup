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
vll a, b;
void Input() {
	cin >> n >> m;
}

bool check(ll r) {
	ll t = 0;
	for (ll i = 0; i < n; i++) {
		while (!(b[t] - r <= a[i] and b[t] + r >= a[i])) {
			t++;
			if (t == m)return false;
		}
	}
	return true;
}

void Solve() {
	a.resize(n), b.resize(m);
	for (ll i = 0; i < n; i++) cin >> a[i];
	for (ll i = 0; i < m; i++) cin >> b[i];
	ll st = 0, ed = 10000000000;
	ll ans = inf;
	while (st <= ed) {
		ll mid = st + (ed - st) / 2;
		if (check(mid))ed = mid - 1, ans = min(ans, mid);
		else st = mid + 1;
	}
	cout << ans;
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