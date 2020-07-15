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

string a, b;

void Input() {
	cin >> a >> b;
}

void Solve() {
	if (b.size() <= a.size()) {
		ll l = 0, r = b.size() - 1;
		map<char, ll>mpb, mpa;
		for (auto it : b)mpb[it]++;
		ll ans = 0;
		for (ll i = l; i <= r; i++)mpa[a[i]]++;
		while (r < a.size()) {
			ll d = mpa['?'];
			bool f = true;
			for (auto it : mpb) {
				if (it.s <= mpa[it.f]) f &= true;
				else if (it.s <= mpa[it.f] + d)f &= true, d -= (it.s - mpa[it.f]);
				else f &= false;
			}
			ans += f;
			r++;
			mpa[a[l]]--;
			mpa[a[r]]++;
			l++;
		}
		cout << ans;

	}
	else cout << 0;
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