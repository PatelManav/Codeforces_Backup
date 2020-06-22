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

vector<pair<ll, pll>> a;
ll t = 1, n;


void Input() {
	cin >> n;
}

void Solve() {
	vll c(n);
	ll su = 0;
	for (ll i = 0; i < n; i++) cin >> c[i], su += c[i];
	for (ll i = 0; i < n; i++) a.pb({su - c[i], {t, i}});
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
	while (T--) {
		Input();
		//cout << "Case " << t << ": ";
		Solve();
		t++;
	}
	sort(all(a));
	for (ll i = 0; i < a.size() - 1; i++) {
		if (a[i].f == a[i + 1].f and a[i].s.f != a[i + 1].s.f) {
			cout << "YES\n";
			cout << a[i].s.f << " " << a[i].s.s + 1 << endl << a[i + 1].s.f << " " << a[i + 1].s.s + 1 << endl;
			return 0;
		}
	}
	cout << "NO\n";
	return 0;
}