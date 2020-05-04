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

string str;

void Input() {
	cin >> str;
}

void Solve() {
	ll idx = -1;
	for (ll i = str.size() - 1; i >= 0; i--)
		if (str[i] == '0')
			idx = i;

	if (idx != -1) {
		for (ll i = 0; i < str.size(); i++) {
			if (i != idx)
				cout << str[i];
		}
	}
	else
		for (ll i = 0 ; i < str.size() - 1; i++)
			cout << str[i];

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