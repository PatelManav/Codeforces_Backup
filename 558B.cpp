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
//Snippets: bigint, bsearch, graph, splitstring, segtree, delta, sieve

using namespace std;

ll n;
ll arr[size_1d];
map<ll, vll> mp;

void Input() {
	cin >> n;
	for (ll i = 0; i < n; i++) {
		cin >> arr[i];
		mp[arr[i]].push_back(i);
	}
}

void Solve() {
	ll ans = 0, len = 0;
	for (auto it : mp) {
		if (len < it.s.size()) {
			ans = it.f;
			len = it.s.size();
		}
		else if (len == it.s.size()) {
			if (mp[ans][len - 1] - mp[ans][0] > it.s[len - 1] - it.s[0]) {
				ans = it.f;
				len = it.s.size();
			}
		}
	}

	cout << mp[ans][0] + 1 << " " << mp[ans][len - 1] + 1;
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