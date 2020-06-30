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

ll n, k1, k2;

void Input() {
	cin >> n >> k1 >> k2;
}

void Solve() {
	vll a(n), b(n);
	for (ll i = 0; i < n; i++)cin >> a[i];
	for (ll i = 0; i < n; i++)cin >> b[i];
	for (ll i = 0; i < n; i++) {
		if (a[i] == b[i])continue;
		while (k1 and a[i] != b[i]) {
			if (a[i] < b[i])a[i]++, k1--;
			if (a[i] > b[i])a[i]--, k1--;
		}
		while (k2 and a[i] != b[i]) {
			if (a[i] < b[i])b[i]--, k2--;
			if (a[i] > b[i])b[i]++, k2--;
		}
	}
	ll ans = 0;
	ll d = k1 % n;
	for (ll i = 0; i < n; i++) a[i] += k1 / n, b[i] += k2 / n;
	for (ll i = 0; i < n; i++) {if (!d)break; a[i]++, d--;}
	d = k2 % n;
	for (ll i = 0; i < n; i++) {if (!d)break; b[i]++, d--;}
	for (ll i = 0; i < n; i++) ans += (a[i] - b[i]) * (a[i] - b[i]);
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