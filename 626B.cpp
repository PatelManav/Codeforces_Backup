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
string s;

void Input() {
	cin >> n >> s;
}

void Solve() {
	ll r = 0, g = 0, b = 0;
	for (auto it : s) {
		if (it == 'R')r++;
		if (it == 'G')g++;
		if (it == 'B')b++;
	}
	vll a = {r, g, b};
	sort(all(a));

	if ((r and b and g) or (a[0] == 0 and a[1] >= 2 and a[2] >= 2))cout << "BGR";
	else if (a[0] == 0 and a[1] == 0) {if (r)cout << 'R'; else if (g)cout << "G"; else cout << "B";}
	else if (a[0] == 0 and a[1] == 1 and a[2] == 1) {if (!r)cout << 'R'; else if (!g)cout << "G"; else cout << "B";}
	else {
		string ans = "";
		if (r == 1)ans += "R";
		if (g == 1)ans += "G";
		if (b == 1)ans += "B";

		if (r and g)ans += "B";
		if (r and b)ans += "G";
		if (g and b)ans += "R";
		sort(all(ans));
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