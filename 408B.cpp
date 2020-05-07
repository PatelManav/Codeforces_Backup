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
#define f first
#define s second
#define inf INT_MAX
#define size_1d 10000000
#define size_2d 10000
//Snippets: bigint, bsearch, graph, splitstring, segtree, delta, sieve

using namespace std;

map<char, ll> mp1, mp2;
string str1, str2;


void Input() {
	cin >> str1 >> str2;
	for (ll i = 0; i < str1.size(); i++)
		mp1[str1[i]]++;
	for (ll i = 0; i < str2.size(); i++)
		mp2[str2[i]]++;
}

void Solve() {
	ll ans = 0;
	for (auto it : mp2) {
		if (mp1[it.f] == 0) {
			cout << -1;
			return;
		}

		ans += min(it.s, mp1[it.f]);
	}

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