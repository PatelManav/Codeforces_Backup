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
set<ll> S;
ll arr[size_1d];

void Input() {
	cin >> N >> K, S.clear();
	for (ll i = 0; i < N; i++) {
		cin >> arr[i];
		S.insert(arr[i]);
	}
}

void Solve() {
	if (S.size() > K) {
		cout << "-1\n";
		return;
	}

	cout << N*K << endl;

	for (ll i = 0; i < N; i++) {
		for (auto it : S)
			cout << it << " ";
		for (ll i = 0; i < K - S.size(); i++)
			cout << "1 ";
	}
	cout << endl;
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