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
#define size_2d 10000
//Snippets: bigint, bsearch, graph, splitstring, segtree, delta, sieve

using namespace std;

ll n, k, p, x, y, cnt1, cnt2;
ll arr[size_1d];
vll ans;

void Input() {
	cin >> n >> k >> p >> x >> y;
	cnt1 = cnt2 = 0;
	for (ll i = 0; i < k; i++) {
		cin >> arr[i];
		if (arr[i] >= y)
			cnt2++;
		else
			cnt1++;
		ans.push_back(arr[i]);
	}
}

void Solve() {
	if (cnt1 >= (n + 1) / 2) {
		cout << -1;
		return;
	}

	for (ll i = cnt1 + 1; i < (n + 1) / 2; i++)
		ans.push_back(1);

	for (ll i = cnt2 + 1; i <= (n + 1) / 2; i++)
		ans.push_back(y);

	ll sum = 0;
	for (ll i = 0; i < n; i++)
		sum += ans[i];

	if (sum > x) {
		cout << -1;
		return;
	}

	for (ll i = k; i < n; i++)
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