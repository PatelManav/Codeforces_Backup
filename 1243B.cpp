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
string str1, str2;
void Input() {
	cin >> n >> str1 >> str2;
}

void Solve() {
	map<char, ll> mp1, mp2;
	for (ll i = 0; i < n; i++) {
		if (str1[i] != str2[i]) mp1[str1[i]]++, mp2[str2[i]]++;
	}
	if (mp1.size() != 1 and mp2.size() != 1) cout << "No\n";
	else {
		for (auto it : mp1) {
			if (it.s != 2) {
				cout << "No\n";
				return;
			}
		}
		for (auto it : mp2) {
			if (it.s != 2) {
				cout << "No\n";
				return;
			}
		}
		cout << "Yes\n";
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