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

ll n;

void Input() {
	cin >> n;
}

bool chk(ll x) {
	if (x % 2 == 0)return false;
	for (ll i = 2; i * i <= x; i++)if (x % i == 0)return false;
	return true;
}

void Solve() {
	vector<pll> a;
	for (ll i = 1; i <= n - 1; i++)a.pb({i, i + 1});
	a.pb({n, 1});
	mll mp;
	ll t = 1;
	for (ll i = n; i <= 3 * n / 2; i++) {
		if (chk(i))break;
		if (mp.count(t)) for (ll i = 1; i <= n; i++) {if (!mp.count(i)) {t = i; break;}}
		ll d = t + 2;
		if (d > n)d -= n;
		if (t > n)t -= n;
		mp[d] = mp[t] = 1;
		a.pb({t, d});
		t++;
	}

	cout << a.size() << endl;
	for (auto it : a)cout << it.f << " " << it.s << endl;
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