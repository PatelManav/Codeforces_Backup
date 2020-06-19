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

void Solve() {
	vll a(n);
	for (ll i = 0; i < n; i++) cin >> a[i];
	if (n < 4)cout << 0;
	else {
		map<ll, ll>mp;
		for (auto it : a)mp[it]++;
		auto it = mp.rbegin();
		while (it != mp.rend()) {
			if ((it->s) % 2) {
				it->s--;
				if (mp.count((it->f) - 1))mp[it->f - 1]++;
			}
			it++;
		}
		vll b;
		for (auto it : mp) for (ll i = 0; i < it.s; i++)b.pb(it.f);
		sort(rall(b));
		ll ans = 0, i = 0;
		while (i < b.size())
			if (i + 3 < b.size() and abs(b[i] - b[i + 1]) <= 1 and abs(b[i + 2] - b[i + 3]) <= 1)ans += b[i + 1] * b[i + 3], i += 4;
			else i++;
		cout << ans;
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