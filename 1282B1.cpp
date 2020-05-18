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

ll n, p, k;
ll arr[size_1d];

void Input() {
	cin >> n >> p >> k;
	for (ll i = 0; i < n; i++)
		cin >> arr[i];
}

void Solve() {
	sort(arr, arr + n);
	ll ans1 = 0;
	ll P = p;
	bool flg = false;
	if (p >= arr[0]) {
		ans1++;
		p -= arr[0];
	}
	for (ll i = 2; i < n; i += 2) {
		if (i == n - 1) flg = true;
		if (arr[i] <= p) {
			p -= arr[i];
			ans1 += 2;
		}
		else {
			if (p >= min(arr[i], arr[i - 1])) ans1++;
			break;
		}
	}
	if (!flg and p >= arr[n - 1]) ans1++;

	ll ans2 = 0;
	flg = false;
	for (ll i = 1; i < n; i += 2) {
		if (i == n - 1) flg = true;
		if (arr[i] <= P) {
			P -= arr[i];
			ans2 += 2;
		}
		else {
			if (P >= min(arr[i], arr[i - 1])) ans2++;
			break;
		}
	}
	if (!flg and P >= arr[n - 1]) ans2++;
	cout << max(ans1, ans2) << endl;
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