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

string s;

void Input() {
	cin >> s;
}

void Solve() {
	ll n = s.size(), ans = 0;
	for (ll i = 0; i < n; i++)s[i] = '0' + (s[i] - '0') % 3;
	for (ll i = 0; i < n; i++) if (s[i] == '0')ans++;
	ll i = 0;
	while (i < n - 1) {
		if (s[i] == '0' or s[i + 1] == '0') {i++; continue;}
		else if ((s[i] - '0') % 3 != (s[i + 1] - '0') % 3)ans++, i += 2;
		else if (i < n - 2 and (s[i] - '0') % 3 == (s[i + 2] - '0') % 3)ans++, i += 3;
		else i++;
	}
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