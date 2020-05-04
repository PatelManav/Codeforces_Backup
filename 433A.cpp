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
//Snippets: bigint, bsearch, graph, splitstring, segtree, delta

using namespace std;

ll N;
ll arr[size_1d];
ll cnt1, cnt2, sum;

void Input() {
	cin >> N;
	cnt1 = cnt2 = sum = 0;
	for (ll i = 0; i < N; i++) {
		cin >> arr[i];
		if (arr[i] == 100)
			cnt1++;
		else
			cnt2++;
		sum += arr[i];
	}
}

void Solve() {
	if (sum % 200 != 0) {
		cout << "NO";
		return;
	}
	else {
		sum /= 2;

		for (ll i = 0; i <= cnt2; i++) {
			ll t_sum = sum;
			t_sum -= 200 * i;
			if (t_sum >= 0 and 100 * cnt1 >= t_sum) {
				cout << "YES";
				return;
			}
		}
	}

	cout << "NO";
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