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

ll N;
ll arr[size_1d];

void Input() {
	cin >> N;
	for (ll i = 0; i < N; i++)
		cin >> arr[i];
}

void Solve() {
	bool isEven = false;
	ll idx = 0;
	for (ll i = 0; i < N; i++) {
		if (arr[i] % 2 == 0) {
			isEven = true;
			idx = i;
		}
	}

	if (isEven) {
		cout << 1 << endl;
		cout << idx + 1 << endl;
		return;
	}

	if (N > 1) {
		cout << "2\n1 2\n";
	}
	else {
		cout << "-1\n";
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