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

string str1, str2;

void Input() {
	cin >> str1 >> str2;
}

void Solve() {
	reverse(all(str1)), reverse(all(str2));
	ll a = 0, b = 0;
	for (ll i = 0; i < str2.size(); i++) if (str2[i] == '1') {a = i; break;}
	for (ll i = 0; i < str1.size(); i++) if (str1[i] == '1' and i >= a) {b = i; break;}
	cout << b - a << endl;

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