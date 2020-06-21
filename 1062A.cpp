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
}

void Solve() {
	vll a(n);
	for (ll i = 0; i < n; i++) cin >> a[i];
	ll ans = 0, t = 0;
	for (ll i = 1; i < n; i++) {
		if ((i == n - 1 and a[i] - a[i - 1] == 1 and 1000 - a[i] == 0) or (a[i] - a[i - 1] == 1 and a[i + 1] - a[i] == 1))t++;
		else ans = max(t, ans), t = 0;
	}
	ans = max(ans, t);
	reverse(all(a));
	t = 0;
	for (ll i = 1; i < n; i++) {
		if ((i == n - 1 and a[i - 1] - a[i] == 1 and a[i] - 1 == 0) or (a[i - 1] - a[i] == 1 and a[i] - a[i + 1] == 1))t++;
		else ans = max(t, ans), t = 0;
	}
	ans = max(ans, t);
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