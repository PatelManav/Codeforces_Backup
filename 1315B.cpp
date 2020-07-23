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
#define rep(i,v,n) for(ll i = v; i < n; i++)
//Snippets: delta, sieve, fastexp, dfs, bfs, dijkstra, floodfill

using namespace std;

ll a, b, p;

void Input() {
	cin >> a >> b >> p;
}

void Solve() {
	string s;
	cin >> s;
	ll n = s.size();
	vll dp(n, 0);
	reverse(all(s));
	if (s[0] == 'A')dp[0] = a;
	else dp[0] = b;
	if (s[0] != s[1])dp[0] = 0;
	for (ll i = 1; i < n; i++) {
		dp[i] = dp[i - 1];
		if (s[i] != s[i - 1]) {
			if (s[i] == 'A') dp[i] += a;
			else dp[i] += b;
		}
	}
	reverse(all(s)), reverse(all(dp));
	ll ans = n;
	if (dp[0] <= p) {cout << 1 << endl; return;}
	for (ll i = 0; i < n - 1; i++) {
		if (dp[i] <= p) {cout << i + 1 << endl; return;}
		if (s[i] != s[i + 1]) {
			if (s[i] == 'A') dp[i] -= a;
			else dp[i] -= b;
		}
		dp[i + 1] = dp[i];
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