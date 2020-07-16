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
	vll a(n), b(n, 0);
	for (ll i = 0; i < n; i++) cin >> a[i];
	b[0] = a[0];
	for (ll i = 1; i < n; i++) b[i] = b[i - 1] + a[i];

	double ans = 0.0;
	for (ll i = 0; i < n; i++) for (ll j = i; j < n; j++) {
			if (j - i + 1 < k)continue;
			ll d;
			if (!i)d = 0;
			else d = b[i - 1];
			double x = b[j] - d;
			x /= (j - i + 1);
			ans = max(ans, x);
		}
	cout.precision(20);
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