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
	vll a(n), b(k);
	for (ll i = 0; i < n; i++) cin >> a[i];
	for (ll i = 0; i < k; i++) cin >> b[i];
	sort(all(b)), sort(rall(a));
	ll ans = 0;
	ll t = 0;
	for (ll i = 0; i < k; i++) {
		ans += a[i];
		b[i]--;
		if (b[i] == 0) ans += a[i];
		else t++;
	}
	if (t) {
		reverse(all(b)); reverse(all(a));
		vll c;
		for (auto it : b)if (it)c.pb(it);
		ll t = 0, sz = c.size(), i = 0;
		while (t < sz) {
			ans += a[i];
			i += c[t];
			t++;
		}
	}
	cout << ans << endl;
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