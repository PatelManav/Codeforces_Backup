/*May The Force Be With Me*/
#include <bits/stdc++.h>
#include <stdio.h>
#include <ctype.h>
#define ll long long
#define MOD 1000000007
#define endl "\n"
#define vll vector<long long>
#define pll pair<long long, long long>
#define all(c) c.begin(),c.end()
#define pb push_back
#define f first
#define s second
#define inf INT_MAX
#define size_1d 10000000
#define size_2d 1000
//Snippets: graph, segtree, delta, sieve, fastexp

using namespace std;

ll n;
string str;

void Input() {
	cin >> n >> str;
}

void Solve() {
	ll ans[10] = {0};
	for (ll i = 0; i < n; i++) {
		if (str[i] == 'L') { for (ll j = 0; j < 10; j++) {if (ans[j] == 0) {ans[j] = 1; break;}}}
		else if (str[i] == 'R') { for (ll j = 9; j >= 0; j--) {if (ans[j] == 0) {ans[j] = 1; break;}}}
		else {ans[str[i] - '0'] = 0;}
	}
	for (ll i = 0; i < 10; i++)cout << ans[i];
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