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

ll n, m;
map<string, ll> mp;
string str;

void Input() {
	cin >> n >> m;
}

void Solve() {
	string a = "", b = "", c = "";
	while (n--) {
		cin >> str;
		string og = str;
		reverse(all(str));
		if (mp[og] == 0 and mp[str] == 0) mp[og] = 1;
		else if (mp[og] == 1 or mp[str] == 1) {
			a += og;
			str += c;
			c = str;
			mp[og] = mp[str] = 0;
		}
	}
	for (auto it : mp) {
		string og = it.f;
		reverse(all(og));
		if (og == it.f) b = it.f;
	}
	string ans = a + b + c;
	cout << ans.size() << endl << ans << endl;
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