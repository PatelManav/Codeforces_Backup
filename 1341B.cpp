/*May The Force Be With Me*/
#include <bits/stdc++.h>
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
#define mem(a,val) memset(a,val,sizeof(a))
//Snippets: bigint, bsearch, graph, splitstring, segtree, delta

using namespace std;

ll N, K;
ll arr[1000000], arr_peak[1000000];

void Input() {
	cin >> N >> K;
	for (ll i = 0; i < N; i++)
		cin >> arr[i];
}

void Solve() {
	arr_peak[0] = 0;
	for (ll i = 1; i < N - 1; i++) {
		if (arr[i] > arr[i + 1] and arr[i] > arr[i - 1])
			arr_peak[i] = arr_peak[i - 1] + 1;
		else
			arr_peak[i] = arr_peak[i - 1];
	}
	ll ans = 0;
	ll idx = 0;
	for (ll i = 0; i < N; i++) {
		if ((i + K - 1) < N) {
			if (ans < (arr_peak[max(i + K - 2, i)] - arr_peak[i]))
				idx = i;
			ans = max(ans, arr_peak[max(i + K - 2, i)] - arr_peak[i]);
		}
	}
	cout << ans + 1 << " " <<  idx + 1 << endl;
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