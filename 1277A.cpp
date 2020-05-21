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
vll arr;

void Input() {
	cin >> n;
}

void Solve() {
	ll i = 0;
	for (i; arr[i] <= n; i++);
	cout << i << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	for (ll i = 1; i <= 9; i++) arr.pb(i);
	for (ll i = 0; i < 9; i++) {
		for (ll j = 1; j <= 9; j++) {
			ll t = arr[i];
			for (ll k = 1; k <= j; k++)
				t = t * pow(10, 1) + (t % 10);
			arr.pb(t);
		}
	}
	sort(all(arr));
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