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
ll arr[100];
unordered_map<ll, ll> mp;

void Input() {
	cin >> n >> m, mp.clear();
	for (ll i = 0; i < n; i++)
		cin >> arr[i];
	for (ll i = 0; i < m; i++) {
		ll d;
		cin >> d;
		mp[d - 1]++;
	}
}

void Solve() {
	while (1) {
		bool flg = false;
		for (ll i = 0; i < n - 1; i++) {
			if (arr[i] > arr[i + 1] and mp[i] == 1) {
				flg = true;
				swap(arr[i], arr[i + 1]);
			}
		}
		if (!flg) break;
	}
	for (ll i = 0; i < n - 1; i++) {
		if (arr[i] > arr[i + 1]) {
			cout << "NO\n";
			return;
		}
	}

	cout << "YES\n";
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