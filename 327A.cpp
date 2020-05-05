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

ll N, cnt = 0;
ll arr[size_1d], brr[size_1d];

void Input() {
	cin >> N;
	for (ll i = 0; i < N; i++) {
		cin >> arr[i];
		cnt += arr[i];
		brr[i] = (arr[i]) ? -1 : +1;
	}
}

void Solve() {
	ll sum = -1, t_sum = 0;
	for (ll i = 0; i < N; i++) {
		if (t_sum + brr[i] < 0) {
			t_sum = 0;
			continue;
		}
		t_sum += brr[i];
		sum = max(sum, t_sum);
	}

	cout << cnt + sum;
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