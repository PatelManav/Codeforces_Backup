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
//Snippets: graph, segtree, delta, sieve, fastexp

using namespace std;

ll n;

void Input() {
	cin >> n;
}

void Solve() {
	string str, osf = ""; cin >> str;
	ll t = (n - 11) / 2;
	for (ll i = 0; i < n; i++) {
		if (str[i] != '8' and t)t--;
		else osf += str[i];
	}
	t = (n - 11) / 2;
	string ans = "";
	for (ll i = 0; i < osf.size(); i++) {
		if (osf[i] == '8' and t)t--;
		else ans += osf[i];
	}
	if (ans.size() >= 11 and ans[0] == '8')cout << "YES\n";
	else cout << "NO\n";
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