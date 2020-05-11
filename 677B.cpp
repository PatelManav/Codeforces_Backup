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

ll n, h, k;
ll arr[size_1d];

void Input() {
	cin >> n >> h >> k;
	for (ll i = 0; i < n; i++)
		cin >> arr[i];
}

void Solve() {
	ll ans = 0, cur = 0;
	for (ll i = 0; i < n; i++) {
		if (cur + arr[i] <= h) {
			cur += arr[i];
		}
		else {
			ans++;
			cur = arr[i];
		}
		ans += cur / k;
		cur = cur % k;
	}
	if (cur)
		ans++;
	cout << ans;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGEn
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