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

ll n, p;

void Input() {
	cin >> n >> p;
}

void Solve() {
	string s;
	cin >> s;
	string osf = s;
	for (ll i = 0; i < n; i++)if (osf[i] == '.')osf[i] = '0';
	for (ll i = 0; i < n; i++) {
		if (i + p >= n) break;
		if (s[i] != s[i + p] or (s[i] == '.' and s[i + p] == '.')) {
			if (s[i] == '0')osf[i + p] = '1';
			else if (s[i] == '1')osf[i + p] = '0';
			else if (s[i + p] == '0')osf[i] = '1';
			else if (s[i + p] == '1')osf[i] = '0';
			else osf[i] = '1';
			cout << osf;
			return;
		}
	}
	cout << "no";
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