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

ll l, r;
vll a;
void luck(ll sz, ll n) {
	if (sz >= 15)return;
	a.pb(n * 10 + 4);
	a.pb(n * 10 + 7);
	luck(sz + 1, n * 10 + 4);
	luck(sz + 1, n * 10 + 7);
}

void Input() {
	cin >> l >> r;
}

void Solve() {
	luck(1, 0);
	sort(all(a));
	ll t = l, ans = 0;
	for (ll i = 0; i < a.size(); i++) {
		if (t > r)break;
		if (a[i] < t) continue;
		ll d = min(r - t + 1, a[i] - t + 1);
		ans += d * a[i];
		t = a[i] + 1;
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