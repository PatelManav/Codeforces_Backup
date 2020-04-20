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

ll N, M;
ll arr[100];

void Input() {
	cin >> N >> M;
	for (ll i = 0; i < N; i++) {
		cin >> arr[i];
		arr[i] *= (N - i);
	}
	sort(arr, arr + N);
}

void Solve() {
	ll ans = 0;
	for (ll i = 0; i < N; i++) {
		M -= arr[i];
		if (M < 0)
			break;
		ans++;
	}
	cout << ans << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	ll T = 1;
	//cin >> T;
	while (T--) {
		Input();
		Solve();
	}
	return 0;
}