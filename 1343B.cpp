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

void Input() {
	cin >> N;
}

void Solve() {
	if ((N / 2) % 2 == 1) {
		cout << "NO\n";
		return;
	}
	else {
		cout << "YES\n";
		ll sum = 0;
		for (ll i = 1; i <= N / 2; i++) {
			cout << 2 * i << " ";
			sum += 2 * i;
		}
		ll n = 1;
		for (ll i = 1; i < N / 2; i++) {
			cout << n << " ";
			sum -= n;
			n += 2;
		}
		cout << sum << endl;
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