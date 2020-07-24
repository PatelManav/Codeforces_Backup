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
#define rep(i,v,n) for(ll i = v; i < n; i++)
//Snippets: delta, sieve, fastexp, dfs, bfs, dijkstra, floodfill

using namespace std;

ll n;
vll a;

void Input() {
	cin >> n;
}

void func(ll n, ll m) {
	if (n == 1) {cout << m; return;}
	if (n == 2) {cout << m << " " << 2 * m; return;}
	if (n == 3) {cout << m << " " << m << " " << 3 * m; return;}
	for (ll i = 1; i <= n; i++)if (a[i] % 2)cout << m << " ";
	for (ll i = 1; i <= n / 2; i++)a[i] = a[2 * i] / 2;
	func(n / 2, m * 2);
}

void Solve() {
	a.resize(n + 1);
	for (ll i = 1; i <= n; i++)a[i] = i;
	func(n, 1);
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

