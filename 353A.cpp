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

ll N;
vector<pll> arr;
ll sum1, sum2;

void Input() {
	cin >> N, sum1 = sum2 = 0;
	arr.resize(N);
	for (ll i = 0; i < N; i++) {
		cin >> arr[i].f >> arr[i].s;
		sum1 += arr[i].f, sum2 += arr[i].s;
	}
}

void Solve() {
	if (sum1 % 2 == 0 and sum2 % 2 == 0) {
		cout << 0;
		return;
	}
	else if (sum1 % 2 == 1 and sum2 % 2 == 1) {
		for (ll i = 0; i < N; i++) {
			if ((arr[i].f % 2 == 0 and arr[i].s % 2 == 1) or (arr[i].f % 2 == 1 and arr[i].s % 2 == 0)) {
				cout << 1;
				return;
			}
		}
	}

	cout << -1;

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