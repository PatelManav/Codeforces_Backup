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
	string s; cin >> s;
	string a[] = {"RGB", "RBG", "BRG", "BGR", "GRB", "GBR"};
	ll mn = inf;
	string osf = s;
	for (ll i = 0; i < 6; i++) {
		ll t = 0, ans = 0;
		string lol = "";
		for (ll j = 0; j < n; j++) {
			if (a[i][t] != s[j])ans++;
			lol += a[i][t];
			t++;
			t %= 3;
		}
		if (ans < mn) {
			mn = ans;
			osf = lol;
		}
	}
	cout << mn << endl << osf;

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