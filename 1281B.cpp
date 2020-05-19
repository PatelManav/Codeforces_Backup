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
11
string str1, str2;

void Input() {
	cin >> str1 >> str2;
}

void Solve() {
	if (str1 < str2) {
		cout << str1 << endl;
		return;
	}
	for (ll i = 0; i < str1.size(); i++) {
		for (ll j = i + 1; j < str1.size(); j++) {
			if (str1[i] == str1[j]) continue;
			swap(str1[i], str1[j]);
			if (str1 < str2) {
				cout << str1 << endl;
				return;
			}
			swap(str1[i], str1[j]);
		}
		if (str1[i] > str2[i] or i >= str2.size()) break;
	}
	cout << "---\n";
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