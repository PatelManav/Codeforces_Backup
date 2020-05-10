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
#define size_2d 1000
//Snippets: bigint, bsearch, graph, splitstring, segtree, delta, sieve, fastexp

using namespace std;

ll n;
string arr[size_1d];

bool isB(string str) {
	if (str[0] != '1')
		return false;
	for (ll i = 1; i < str.size(); i++)
		if (str[i] != '0')
			return false;
	return true;
}

void Input() {
	cin >> n;
	for (ll i = 0; i < n; i++)
		cin >> arr[i];
}

void Solve() {
	string ans = "1";
	ll t = 0;
	for (ll i = 0; i < n; i++) {
		if (arr[i][0] == '0' and arr[i].size() == 1) {
			cout << 0;
			return;
		}
		else if (isB(arr[i])) {
			t += (arr[i].size() - 1);
		}
		else {
			ans = arr[i];
		}
	}
	for (ll i = 0; i < t; i++)
		ans += '0';
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