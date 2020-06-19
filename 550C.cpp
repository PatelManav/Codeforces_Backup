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
	ll n = s.size();
	for (ll i = n - 1; i >= 0; i--) {
		string osf = "";
		ll x;
		osf += s[i]; x = stoi(osf);
		if (x % 8 == 0) {cout << "YES\n" << x; return;}
		for (ll j = i - 1; j >= 0; j--) {
			osf = "";
			osf += s[j]; osf += s[i]; x = stoi(osf);
			if (x % 8 == 0) {cout << "YES\n" << x; return;}
			for (ll k = j - 1; k >= 0; k--) {
				osf = "";
				osf += s[k]; osf += s[j]; osf += s[i]; x = stoi(osf);
				if (x % 8 == 0) {cout << "YES\n" << x; return;}
			}
		}
	}
	cout << "NO";
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