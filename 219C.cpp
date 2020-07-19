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
#define rep(i,v,n) for(long long i = v; i < n; i++)
//Snippets: delta, sieve, fastexp, dfs, bfs, dijkstra, floodfill

using namespace std;

ll n, k;

void Input() {
	cin >> n >> k;
}

void Solve() {
	string s;
	cin >> s;
	if (k > 2) {
		vector<string> c;
		string a = ""; a += s[0];
		rep(i, 1, n) {
			if (s[i] == s[i - 1])a += s[i];
			else {
				c.pb(a);
				a = "";
				a += s[i];
			}
		}
		c.pb(a);
		ll ans = 0;
		rep(i, 0, c.size()) {
			if (c[i].size() > 1) {
				ll Ch = c[i][0] - 'A';
				for (ll j = 1; j < c[i].size(); j += 2) {
					ans++;
					c[i][j] = (Ch + 1) % k + 'A';
					if (i != c.size() - 1 and c[i][j] == c[i + 1][0])c[i][j] = (Ch + 2) % k + 'A';
				}
			}
		}
		cout << ans << endl;
		rep(i, 0, c.size())cout << c[i];
	}
	else {
		string a = s, b = s;
		bool f = true;
		for (ll i = 0; i < n; i++) {
			if (f)a[i] = 'A', b[i] = 'B';
			else b[i] = 'A', a[i] = 'B';
			f = !f;
		}
		ll ta = 0, tb = 0;
		for (ll i = 0; i < n; i++) {
			if (a[i] != s[i])ta++;
			if (b[i] != s[i])tb++;
		}
		if (ta > tb)cout << tb << endl << b;
		else cout << ta << endl << a;
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