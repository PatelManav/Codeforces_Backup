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
//Snippets: bigint, bsearch, graph, splitstring, segtree

using namespace std;

ll N, gcd = 0;
ll arr[size_1d];

void Input() {
	cin >> N;
	for (ll i = 0; i < N; i++) {
		cin >> arr[i];
		gcd = __gcd(gcd, arr[i]);
	}
}

void Solve() {
	cout << "YES\n";
	if (gcd != 1) {
		cout << "0" << endl;
		return;
	}
	for (ll i = 0; i < N; i++) {
		arr[i] = arr[i] & 1;
	}
	ll cnt = 0;
	for (ll i = 0; i < N - 1; i++) {
		if (arr[i] == 1) {
			if (arr[i + 1] == 1) {
				cnt++;
			}
			else {
				cnt += 2;
			}
			arr[i] = arr[i + 1] = 0;
		}
	}
	if (arr[N - 1] == 1) {
		cnt += 2;
	}

	cout << cnt << endl;
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