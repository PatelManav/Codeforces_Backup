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

ll n, m, k;
ll arr[size_1d];

void Input() {
	cin >> n >> m >> k;
	for (ll i = 0; i < n; i++)
		cin >> arr[i];
}

void Solve() {
	ll i = 0;
	for (i; i < n - 1; i++) {
		ll l = max(arr[i + 1] - k, 0ll);
		if (arr[i] >= l) m += (arr[i] - l);
		else if (m < abs(arr[i] - l)) break;
		else m -= abs(arr[i] - l);
	}

	if (i != n - 1) cout << "NO\n";
	else cout << "YES\n";
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