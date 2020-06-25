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

ll n, k, l, r, s, sk;

void Input() {
	cin >> n >> k >> l >> r >> s >> sk;
}

void Solve() {
	vll a(n, l);
	s -= n * l;
	sk -= k * l;
	if (!s)for (auto it : a)cout << it << " ";
	else {
		ll d = sk / k;
		sk -= d * k;
		s -= d * k;
		for (ll i = 0; i < k; i++) a[i] += d;
		for (ll i = 0; i < k; i++) {if (!sk) break; a[i]++, sk--; s--;}
		r = a[k - 1];
		for (ll i = n - 1; i >= k - 1; i--) {
			ll d = min(r - l, s);
			if (!s)break;
			a[i] += d;
			s -= d;
		}
		for (auto it : a)cout << it << " ";
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