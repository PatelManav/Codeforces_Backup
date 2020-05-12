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
ll arr[1000], brr[1000];

void Input() {
	cin >> n;
	for (ll i = 0; i < n; i++)
		cin >> arr[i];
	for (ll i = 0; i < n; i++)
		cin >> brr[i];
}

void Solve() {
	ll t = 0;
	ll ans[1000] = {0};

	for (ll i = 0; i < n; i++) {
		if (arr[i] == brr[i])
			ans[i] = arr[i];
		else
			t++;
	}

	unordered_map<ll, ll> mp;
	for (ll i = 0; i < n; i++)
		mp[ans[i]] = 1;

	if (t == 0 or t == 1) {
		ll st;
		if (t == 0) {
			for (ll i = 0; i < n - 1; i++)
				if (arr[i] == arr[i + 1])
					st = i;
		}
		else {
			for (ll i = 0; i < n; i++)
				if (arr[i] != brr[i])
					st = i;
		}

		for (ll i = 1; i <= n; i++) {
			if (mp[i] == 0) {
				ans[st] = i;
				break;
			}
		}
	}
	else {
		ll chk = 0;
		vll st, val;
		for (ll i = 1; i <= n; i++) {
			if (mp[i] == 0)
				val.push_back(i);
		}
		for (ll i = 0; i < n; i++) {
			if (arr[i] != brr[i]) {
				st.push_back(i);
			}
		}
		ans[st[0]] = val[0], ans[st[1]] = val[1];
		for (ll i = 0; i < n; i++) {
			if (arr[i] != ans[i])
				chk++;
			if (brr[i] != ans[i])
				chk++;
		}

		if (chk != 2) {
			ans[st[1]] = val[0], ans[st[0]] = val[1];
		}
	}

	for (ll i = 0; i < n; i++)
		cout << ans[i] << " ";
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