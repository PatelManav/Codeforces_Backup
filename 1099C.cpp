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
ll k;
void Input() {
	cin >> s >> k;
}

void Solve() {
	ll a = 0, b = 0, n = 0;
	for (auto it : s) {if (it == '?')a++; else if (it == '*')b++; else n++;}
	if (k < n - (a + b) or (k > n and !b))cout << "Impossible";
	else {
		string osf = "";
		ll d = abs(k - n);
		if (k > n) {
			for (ll i = 0; i < s.size(); i++) {
				if (s[i] == '?')continue;
				else if (s[i] == '*') while (d > 0)osf += s[i - 1], d--;
				else osf += s[i];
			}
		}
		else if (k < n) {
			for (ll i = 0; i < s.size(); i++) {
				if (s[i] == '*' and d)osf.pop_back(), d--;
				else if (s[i] == '?' and d)osf.pop_back(), d--;
				else if (s[i] != '?' and s[i] != '*')osf += s[i];
			}
		}
		else {
			for (ll i = 0; i < s.size(); i++) {
				if (s[i] == '*')continue;
				else if (s[i] == '?')continue;
				else osf += s[i];
			}
		}
		cout << osf;
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