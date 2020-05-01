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
unordered_map<ll, list<ll>> mp;

ll Fun(ll x) {
	for (ll i = 2; i <= x; i++) {
		if (x % i == 0) {
			return i;
		}
	}
}

void Input() {
	cin >> N, mp.clear();
	for (ll i = 0; i < N; i++) {
		cin >> arr[i];
		mp[Fun(arr[i])].push_back(i);
	}
}

void Solve() {
	ll m = 0;
	for (auto it : mp) {
		if (mp[it.f].size()) {
			m++;
			for (auto jt : mp[it.f])
				arr[jt] = m;
		}
	}

	cout << m << endl;
	for (ll i = 0; i < N; i++)
		cout << arr[i] << " ";
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