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
string str1, str2;
map<char, ll> mp;

void Input() {
	cin >> n >> str1 >> str2;
}

void Solve() {
	for (ll i = 0; i < n; i++)
		mp[str2[i]]++;

	//part1
	ll ans = 0;
	for (ll i = 0; i < n; i++) {
		ans++;
		for (ll ch = '0'; ch <= '9'; ch++) {
			if (ch >= str1[i] and mp[ch] > 0) {
				ans--;
				mp[ch]--;
				break;
			}
		}
	}
	cout << ans << endl;

	mp.clear();

	for (ll i = 0; i < n; i++)
		mp[str2[i]]++;

	//part1
	ans = 0;
	for (ll i = 0; i < n; i++) {
		for (ll ch = '0'; ch <= '9'; ch++) {
			if (ch > str1[i] and mp[ch] > 0) {
				ans++;
				mp[ch]--;
				break;
			}
		}
	}
	cout << ans << endl;
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
