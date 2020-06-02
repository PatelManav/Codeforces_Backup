/*May The Force Be With Me*/
#include <bits/stdc++.h>
#include <stdio.h>
#include <ctype.h>
#pragma GCC optimize ("Ofast")
#define ll long long
#define MOD 1000000007
#define endl "\n"
#define vll vector<long long>
#define mll map<long long,long long>
#define pll pair<long long, long long>
#define all(c) c.begin(),c.end()
#define rall(c) c.rbegin(),c.rend()
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
	vll a(n);
	vector<pair<ll, pll>>ans;
	for (ll i = 0; i < n; i++) cin >> a[i];
	mll mp;
	for (ll i = 0; i < n; i++)mp[a[i]]++;
	ll x = 0, c = 0;
	for (auto it : mp) {
		if (c < it.s)x = it.f;
		c = max(c, it.s);
	}
	ll idx = 0;
	for (ll i = 0; i < n; i++) {
		if (a[i] == x) {
			idx = i;
			for (ll j = i - 1; j >= 0; j--) {
				if (a[j] > a[idx])ans.pb({2, {j + 1, j + 2}});
				else if (a[j] < a[idx])ans.pb({1, {j + 1, j + 2}});
			}
			break;
		}
	}
	for (ll i = idx + 1; i < n; i++) {
		if (a[i] > a[idx])ans.pb({2, {i + 1, i}});
		else if (a[i] < a[idx])ans.pb({1, {i + 1, i}});
	}
	cout << ans.size() << endl;
	for (auto it : ans) {
		cout << it.f << " " << it.s.f << " " << it.s.s << endl;
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