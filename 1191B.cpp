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

string a, b, c;

void Input() {
	cin >> a >> b >> c;
}

void Solve() {
	if (a == b and b == c) {
		cout << 0;
		return;
	}

	if (a == b or b == c or a == c) {
		cout << 1;
		return;
	}
	ll ans = 2;
	map<string, ll> mp;
	mp[a] = 1, mp[b] = 1, mp[c] = 1;

	for (auto it : mp) {
		ll d = 2;
		char x = it.f[0], t = it.f[1];
		string osf = "";
		if (x == '1') {
			osf = "2" + t;
			if (mp.count(osf))d--;
			osf = "3" + t;
			if (mp.count(osf))d--;
		}
		else if (x == '9') {
			osf = "8" + t;
			if (mp.count(osf))d--;
			osf = "7" + t;
			if (mp.count(osf))d--;
		}
		else {
			ll v = x - '0';
			osf = to_string(v - 1) + t;
			if (mp.count(osf))d--;
			osf = to_string(v + 1) + t;
			if (mp.count(osf))d--;
			ll e = 2;
			osf = to_string(v - 1) + t;
			if (mp.count(osf))e--;
			osf = to_string(v - 2) + t;
			if (mp.count(osf))e--;
			ll f = 2;
			osf = to_string(v + 1) + t;
			if (mp.count(osf))f--;
			osf = to_string(v + 2) + t;
			if (mp.count(osf))f--;
			d = min(d, min(e, f));
		}
		ans = min(ans, d);
	}
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