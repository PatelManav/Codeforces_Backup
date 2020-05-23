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

string str;
void Input() {
	cin >> str;
}

void Solve() {
	ll n = str.size();
	ll alph[26] = {0};
	pll arr[n];
	for (ll i = 0; i < n; i++) {
		ll t = 0;
		for (ll j = 0; j < str[i] - 'a'; j++) t += alph[j];
		arr[i].f = t;
		alph[str[i] - 'a']++;
	}
	for (ll i = 0; i < 26; i++)alph[i] = 0;
	for (ll i = n - 1; i >= 0; i--) {
		ll t = 0;
		for (ll j = 25; j > str[i] - 'a'; j--) t += alph[j];
		arr[i].s = t;
		alph[str[i] - 'a']++;
	}
	for (ll i = 0; i < n; i++) {
		if (arr[i].f % 2 == 0)cout << "Mike\n";
		else cout << "Ann\n";
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