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
ll arr[size_1d];

void Input() {
	n = 3;
	for (ll i = 0; i < n; i++)
		cin >> arr[i];
}

void Solve() {
	sort(arr, arr + 3);
	ll ans = 0;
	if (arr[0]) ans++, arr[0]--;
	if (arr[1]) ans++, arr[1]--;
	if (arr[2]) ans++, arr[2]--;
	sort(arr, arr + 3);
	if (arr[2] and arr[1]) ans++, arr[2]--, arr[1]--;
	if (arr[2] and arr[0]) ans++, arr[2]--, arr[0]--;
	if (arr[0] and arr[1]) ans++, arr[0]--, arr[1]--;
	if (arr[0] and arr[1] and arr[2]) ans++;
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