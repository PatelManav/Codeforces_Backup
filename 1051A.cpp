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


void Input() {

}

void Solve() {
	string s;
	cin >> s;
	ll f1 = 0, f2 = 0, f3 = 0;
	for (ll i = 0; i < s.size(); i++) {
		if (s[i] >= 'a' and s[i] <= 'z')f1++;
		if (s[i] >= 'A' and s[i] <= 'Z')f2++;
		if (s[i] >= '0' and s[i] <= '9')f3++;
	}

	if (f1 and f2 and f3)cout << s << endl;
	else if (!f1 and f2 and f3) {
		if (f2 > 1) {for (ll i = 0; i < s.size(); i++) { if (s[i] >= 'A' and s[i] <= 'Z') {s[i] = 'a'; break;}}}
		else if (f3 > 1) {for (ll i = 0; i < s.size(); i++) { if (s[i] >= '0' and s[i] <= '9') {s[i] = 'a'; break;}}}
		cout << s << endl;
	}
	else if (f1 and !f2 and f3) {
		if (f1 > 1) {for (ll i = 0; i < s.size(); i++) { if (s[i] >= 'a' and s[i] <= 'z') {s[i] = 'A'; break;}}}
		else if (f3 > 1) {for (ll i = 0; i < s.size(); i++) { if (s[i] >= '0' and s[i] <= '9') {s[i] = 'A'; break;}}}
		cout << s << endl;
	}
	else if (f1 and f2 and !f3) {
		if (f2 > 1) {for (ll i = 0; i < s.size(); i++) { if (s[i] >= 'A' and s[i] <= 'Z') {s[i] = '1'; break;}}}
		else if (f1 > 1) {for (ll i = 0; i < s.size(); i++) { if (s[i] >= 'a' and s[i] <= 'z') {s[i] = '1'; break;}}}
		cout << s << endl;
	}
	else {
		if (f1)s[1] = 'A', s[2] = '1';
		if (f2)s[1] = 'a', s[2] = '1';
		if (f3)s[1] = 'A', s[2] = 'a';
		cout << s << endl;
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