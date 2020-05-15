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

ll n, k;
ll arr[30], brr[30];

void Input() {
	cin >> n >> k;
	for (ll i = 0; i < n; i++)
		cin >> arr[i];
	for (ll i = 0; i < n; i++)
		cin >> brr[i];
}

void Solve() {
	sort(arr, arr + n);
	sort(brr, brr + n, greater<ll>());

	for (ll i = 0; i < min(k, n); i++)
		if (arr[i] < brr[i])swap(arr[i], brr[i]);
	ll sum = 0;
	for (ll i = 0; i < n; i++) sum += arr[i];
	cout << sum << endl;
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