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

ll n, k;
string str;
map<char, ll> mp;

void Input() {
	cin >> n >> k;
	cin >> str;
	for (ll i = 0; i < k; i++) {
		char ch;
		cin >> ch;
		mp[ch]++;
	}
}

void Solve() {
	ll N = 0;
	vll idx;
	idx.pb(-1);
	for (ll i = 0; i < n; i++) {
		if (!mp[str[i]])
			idx.pb(i);
	}
	idx.pb(n);
	for (ll i = 1; i < idx.size(); i++)
		N += (idx[i] - (idx[i - 1] + 1)) * ((idx[i] - (idx[i - 1] + 1)) + 1) / 2;
	cout << N << endl;
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