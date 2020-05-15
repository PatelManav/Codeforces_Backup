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
ll arr[100], brr[100];

void Input() {
	cin >> n;
	for (ll i = 0; i < n; i++)
		cin >> arr[i];
	for (ll i = 0; i < n; i++)
		cin >> brr[i];
}

void Solve() {
	ll pt = 0;
	for (ll i = 0; i < n; i++) pt += brr[i];
	for (ll i = 0; i < n; i++) if (arr[i] and brr[i]) pt--;
	if (pt < 0) cout << 1 << endl;
	else {
		ll idx[n] = {0}, valid = 0;
		for (ll i = 0; i < n; i++) idx[i] = brr[i];
		for (ll i = 0; i < n; i++) if (arr[i] and !idx[i]) valid++;
		if (!valid) cout << -1 << endl;
		else {
			pt++;
			ll mx = pt / valid;
			if (mx * valid < pt) mx++;
			cout << mx << endl;
		}
	}
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