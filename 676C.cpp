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
#define pb push_back
#define f first
#define s second
#define inf INT_MAX
#define size_1d 10000000
#define size_2d 1000
//Snippets: graph, segtree, delta, sieve, fastexp

using namespace std;

ll n, k;
string str;

void Input() {
	cin >> n >> k >> str;
}

void Solve() {
	ll l = 0, r = 1, a = str[0] == 'a', b = str[0] == 'b', ans = 0;
	while (r < n) {
		while (min(a, b) > k) {
			a -= str[l] == 'a', b -= str[l] == 'b';
			l++;
		}
		a += str[r] == 'a', b += str[r] == 'b';
		ans = max(ans, r - l);
		r++;
	}
	while (min(a, b) > k) {
		a -= str[l] == 'a', b -= str[l] == 'b';
		l++;
	}
	ans = max(ans, r - l);
	cout << ans;
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