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

ll a, b, c;

void Input() {
	cin >> a >> b >> c;
}

void Solve() {
	ll ans = inf;
	ll A = a, B = b, C = c;
	for (ll i = 1; i <= 20000; i++) {
		ll t;
		for (ll j = i; j <= 20000; j += i) {
			t = abs(i - a);
			t += abs(j - b);
			ll x = c / j, k;
			if (c % j <  (x + 1) * j - c) k = x * j;
			else k = (x + 1) * j;
			t += min(c % j, (x + 1) * j - c);
			if (t < ans)A = i, B = j, C = k;
			ans = min(t, ans);
		}
	}
	cout << ans << endl << A << " " << B << " " << C << endl;
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