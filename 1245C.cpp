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


void Input() {
}

void Solve() {
	string s;
	cin >> s;
	bool f = false;
	for (auto it : s)if (it == 'm' or it == 'w')f = true;
	if (f)cout << 0;
	else {
		mll mp;
		mp[-1] = 1;
		mp[0] = 1;
		for (ll i = 1; i < s.size(); i++) {
			mp[i] = mp[i - 1];
			if (s[i] == s[i - 1] and (s[i] == 'u' or s[i] == 'n')) mp[i] = (mp[i] + mp[i - 2]) % MOD;
		}
		cout << mp[s.size() - 1];
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