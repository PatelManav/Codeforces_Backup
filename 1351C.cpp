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
//Snippets: delta, sieve, fastexp, dfs, bfs, dijkstra

using namespace std;

ll n;

void Input() {
}

void Solve() {
	string s;
	cin >> s;
	ll x = 0, y = 0, ans = 0;
	map<pll, ll> mp1, mp2;
	for (auto it : s) {
		if (it == 'N') {
			if (mp1[ {x, y + 1}])ans++;
			else ans += 5, mp1[ {x, y + 1}] = 1;
			y++;
		}
		if (it == 'S') {
			if (mp1[ {x, y}])ans++;
			else ans += 5, mp1[ {x, y}] = 1;
			y--;
		}
		if (it == 'E') {
			if (mp2[ {x + 1, y}])ans++;
			else ans += 5, mp2[ {x + 1, y}] = 1;
			x++;
		}
		if (it == 'W') {
			if (mp2[ {x, y}])ans++;
			else ans += 5, mp2[ {x, y}] = 1;
			x--;
		}
	}
	cout << ans << endl;
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