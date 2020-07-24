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

void Input() {
	cin >> n;
}

void Solve() {
	vll a(n + 1);
	for (ll i = 1; i < n + 1; i++) cin >> a[i];
	ll t = 0;
	string s[n + 1];
	s[0] = string(200, 'a');
	for (ll i = 1; i < n + 1; i++) {
		if (a[i] and a[i] <=  s[i - 1].size())s[i] = string(s[i - 1].begin(), s[i - 1].begin() + (a[i]));
		else if (!a[i]) {
			t++;
			t %= 26;
			ll ch = s[i - 1][s[i - 1].size() - 1] + t;
			s[i] = string(1, 'a' + ch % 26);
		}
		else {
			string temp = string(s[i - 1].begin(), s[i - 1].end());
			t++;
			t %= 26;
			s[i] = temp;
			ll ch = s[i][s[i].size() - 1] + t;
			temp = string(a[i] - s[i].size(), 'a' + ch % 26);
			s[i] += temp;
			s[i - 1] = s[i];
		}
	}
	for (auto it : s)cout << it << endl;
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
	//ll t = 1;
	while (T--) {
		Input();
		//cout << "Case " << t << ": ";
		Solve();
		//t++;
	}
	return 0;
}