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

ll n;

void Input() {
	cin >> n;
}

void Solve() {
	vector<string> arr;
	for (ll i = 0; i < n; i++) {
		string str;
		cin >> str;
		arr.pb(str);
	}

	vector<pll> cnt;
	ll ans = 0;
	for (ll i = 0; i < n; i++) {
		ll one = 0, zero = 0;
		for (ll j = 0; j < arr[i].size(); j++) {if (arr[i][j] == '1')one++; else zero++;}
		cnt.pb({one, zero});
		if ((one + zero) % 2)ans++;
	}
	for (ll i = 0; i < n; i++) {
		if ((cnt[i].f + cnt[i].s) % 2)continue;
		if (cnt[i].f % 2 == 0) {ans++; continue;}
		for (ll j = 0; j < n; j++) {
			if (j == i or ((cnt[j].f + cnt[j].s) % 2 == 0 and cnt[j].f % 2 == 0))continue;
			if (cnt[j].f >= 1) {cnt[i].f++; cnt[i].s--; cnt[j].f--; cnt[j].s++; ans++; break;}
			else if (cnt[j].s >= 1) {cnt[i].f--; cnt[i].s++; cnt[j].f++; cnt[j].s--; ans++; break;}
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