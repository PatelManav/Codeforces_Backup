/*May The Force Be With Me*/
#include <bits/stdc++.h>
#include <stdio.h>
#include <ctype.h>
#pragma GCC optimize ("Ofast")
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

string s, t, p;

void Input() {
	cin >> s >> t >> p;
}

void Solve() {
	ll cnt_s[26] = {0}, cnt_t[26] = {0}, cnt_p[26] = {0};
	for (ll i = 0; i < s.size(); i++)cnt_s[s[i] - 'a']++;
	for (ll i = 0; i < t.size(); i++)cnt_t[t[i] - 'a']++;
	for (ll i = 0; i < p.size(); i++)cnt_p[p[i] - 'a']++;
	ll i = 0, j = 0;
	while (i < s.size()) {
		if (j == t.size() or cnt_t[s[i] - 'a'] == 0) {
			cout << "NO\n";
			return;
		}

		if (s[i] == t[j])i++;
		j++;
	}

	for (ll i = 0; i < t.size(); i++) {
		if (cnt_t[t[i] - 'a'] > cnt_p[t[i] - 'a'] + cnt_s[t[i] - 'a']) {
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
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