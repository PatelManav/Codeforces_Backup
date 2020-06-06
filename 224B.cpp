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

ll n, k;

void Input() {
	cin >> n >> k;
}

void Solve() {
	vll a(n);
	for (ll i = 0; i < n; i++) cin >> a[i];
	mll mp;
	ll l = 0, r = 0;
	mp[a[0]] = 1;
	while (r < n - 1) {
		if (mp.size() == k) {
			while (mp[a[l]] != 1) {
				mp[a[l]]--;
				l++;
			}
			cout << l + 1 << " " << r + 1;
			return;
		}
		mp[a[r + 1]]++;
		r++;
	}
	if (mp.size() == k) {
		while (mp[a[l]] != 1) {
			mp[a[l]]--;
			l++;
		}
		cout << l + 1 << " " << r + 1;
		return;
	}

	cout << "-1 -1";
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