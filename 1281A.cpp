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
	string osf = "";
	ll n = str.size();
	if (n >= 2) {
		osf += str[n - 2];
		osf += str[n - 1];
		if (osf == "po") {cout << "FILIPINO\n"; return;}
	}
	osf = "";
	if (n >= 4) {
		osf += str[n - 4];
		osf += str[n - 3];
		osf += str[n - 2];
		osf += str[n - 1];
		if (osf == "desu" or osf == "masu") {cout << "JAPANESE\n"; return;}
	}
	cout << "KOREAN\n";
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