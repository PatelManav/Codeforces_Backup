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
#define size 10000000
#define size_2d 10000
#define mem(a,val) memset(a,val,sizeof(a))
//Snippets: bigint, bsearch, graph, splitstring, segtree

using namespace std;

ll N;
ll arr[size];
map<ll, ll> dp;

void Input() {
	cin >> N;
	for (ll i = 0; i < N; i++) {
		cin >> arr[i];
		//dp[arr[i]] = 1;
	}
}

void Solve() {
	ll ans = 0, ed = 0;
	for (ll i = 0; i < N; i++) {
		dp[arr[i]] = max(dp[arr[i]], dp[arr[i] - 1] + 1);
		ans = max(ans, dp[arr[i]]);
	}
	cout << ans << endl;
	for (ll i = 0; i < N; i++) {
		if (dp[arr[i]] == ans) {
			ed = arr[i];
			break;
		}
	}
	ed -= (ans - 1);
	for (ll i = 0; i < N; i++) {
		if (arr[i] == ed) {
			cout << i + 1 << " ";
			ed++;
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
	while (T--) {
		Input();
		Solve();
	}
	return 0;
}