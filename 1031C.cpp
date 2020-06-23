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

ll a, b;

void Input() {
	cin >> a >> b;
}

void Solve() {
	ll mx = a + b;
	ll x = (-1 + sqrt(1 + 8 * mx)) / 2;
	vll c(x + 1, 1);
	c[0] = 0;
	vll ans1, ans2;
	for (ll i = x; i > 0; i--) if (i <= a and c[i])ans1.pb(i), a -= i, c[i] = 0;
	for (ll i = x; i > 0; i--) if (i <= b and c[i])ans2.pb(i), b -= i, c[i] = 0;
	cout << ans1.size() << endl;
	for (auto it : ans1)cout << it << " ";
	cout << endl;
	cout << ans2.size() << endl;
	for (auto it : ans2)cout << it << " ";
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