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


void Input() {
}

void Solve() {
	string str; cin >> str;
	vector<pair<char, ll>> p;
	ll t = 1;
	for (ll i = 1; i < str.size(); i++) {
		if (str[i - 1] == str[i])t++;
		else {
			p.pb({str[i - 1], t});
			t = 1;
		}
	}
	p.pb({str[str.size() - 1], t});
	for (ll i = 0; i < p.size(); i++) {
		if (i != p.size() - 1 and p[i].s >= 2 and p[i + 1].s >= 2)p[i].s = 2, p[i + 1].s = 1;
		else if (p[i].s >= 3)p[i].s = 2;
	}
	for (ll i = 0; i < p.size(); i++) {
		while (p[i].s--)cout << p[i].f;
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