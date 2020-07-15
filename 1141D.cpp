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
	string a, b;
	cin >> a >> b;
	map<char, vll> mp;
	vector<pll>ans;
	for (ll i = 0; i < n; i++)mp[a[i]].pb(i);
	vll y;
	for (ll i = 0; i < n; i++) {
		if (b[i] == '?') {y.pb(i); continue;}
		if (mp[b[i]].size() > 0) {
			ans.pb({mp[b[i]].back() + 1, i + 1});
			mp[b[i]].pop_back();
		}
		else if (mp['?'].size() > 0) {
			ans.pb({mp['?'].back() + 1, i + 1});
			mp['?'].pop_back();
		}
	}
	if (y.size()) {
		auto it = mp.begin();
		while (it != mp.end() and y.size()) {
			for (ll i = 0; i < (it->s).size(); i++) {
				if (y.size()) {
					ans.pb({((it->s)[i]) + 1, y.back() + 1});
					y.pop_back();
				}
			}
			it++;
		}
	}
	cout << ans.size() << endl;
	for (auto it : ans) {
		cout << it.f << " " << it.s << endl;
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