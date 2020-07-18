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
	string s = to_string(n);
	ll d = 0;
	while (n > 0) {
		d = max(d, n % 10);
		n /= 10;
	}
	cout << d << endl;
	while (d--) {
		string ans = "";
		for (ll i = 0; i < s.size(); i++) {
			char it = s[i];
			if (it != '0') {
				ans += "1";
				s[i]--;
			}
			else ans += "0";
		}
		bool f = false;
		for (ll i = 0; i < ans.size(); i++) {
			if (ans[i] != '0')f = true;
			if (f)cout << ans[i];
		}
		cout << " ";
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