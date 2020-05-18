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
string str[1500];

void Input() {
	cin >> n >> k;
	for (ll i = 0; i < n; i++)
		cin >> str[i];
}

void Solve() {
	map<string, ll> mp;
	ll ans = 0;
	for (ll i = 0; i < n; i++) mp[str[i]]++;
	for (ll i = 0; i < n; i++) {
		for (ll j = i + 1; j < n; j++) {
			string osf = "";
			for (ll p = 0; p < k; p++) {
				if (str[i][p] == str[j][p]) osf += str[i][p];
				else if ((str[i][p] == 'S' and str[j][p] == 'E') or (str[j][p] == 'S' and str[i][p] == 'E')) osf += 'T';
				else if ((str[i][p] == 'E' and str[j][p] == 'T') or (str[j][p] == 'E' and str[i][p] == 'T')) osf += 'S';
				else osf += 'E';
			}
			ans += mp[osf];
		}
	}
	cout << ans / 3 << endl;
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