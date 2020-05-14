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

ll n;
ll arr[3];

void Input() {
	n = 3;
	for (ll i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n);
}

void Solve() {
	ll ans = inf;
	ll delta[3] = { -1, 0, 1};
	for (ll i = 0; i < 3; i++) {
		for (ll j = 0; j < 3; j++) {
			for (ll k = 0; k < 3; k++) {
				ans = min(ans, abs((arr[0] + delta[i]) - (arr[1] + delta[j])) + abs((arr[1] + delta[j]) - (arr[2] + delta[k])) + abs((arr[0] + delta[i]) - (arr[2] + delta[k])));
			}
		}
	};
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