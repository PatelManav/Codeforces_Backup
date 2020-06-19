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

ll n, k, s;

void Input() {
	cin >> n >> k >> s;
}

void Solve() {
	ll x = s / k;
	if (x + (s % k != 0) > n - 1 or k > s or (n - 1) * k < s)cout << "NO";
	else {
		cout << "YES\n";
		vll a(k);
		for (ll i = 0; i < k; i++)a[i] = x;
		ll t = 1;
		if (s % k) {
			ll y = s % k;
			for (ll i = 0; i < k; i++) {a[i]++, y--; if (!y)break;}
		}
		ll b = 1;
		for (ll i = 0; i < k; i++) {
			if (t + b * a[i] > n or t + b * a[i] <= 0)b *= -1;
			t += b * a[i];
			cout << t << " ";
		}
	}
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