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
string str;

void Input() {
	cin >> N >> K >> str;
}

void Solve() {
	sort(all(str));
	if (str[0] != str[K - 1]) {
		cout << str[K - 1] << endl;
		return;
	}

	cout << str[0];

	if (str[K] != str[N - 1]) {
		for (ll i = K; i < N; i++)
			cout << str[i];
	}
	else {
		for (ll i = 0; i < (N - 1) / K; i++) {
			cout << str[N - 1];
		}
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