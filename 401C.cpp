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

ll n, m;

void Input() {
	cin >> n >> m;
}

void Solve() {
	if (m > 2 * n + 2 or m < n - 1)cout << -1;
	else {
		string s;
		while (m and n) {
			if (m)s += "1", m--;
			if (n)s += "0", n--;
		}
		if (!m and !n)cout << s;
		else {
			string osf;
			for (ll i = 0; i < s.size(); i++) {
				if (s[i] == '0' and m)osf += "1", m--;
				if (s[i] == '1' and n)osf += "0", n--;
				osf += s[i];
			}
			for (ll i = 0; i < min(2ll, m); i++) osf += "1";
			m -= min(2ll, m);
			if (!m)cout << osf;
			else cout << -1;
		}
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