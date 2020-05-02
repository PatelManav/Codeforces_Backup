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
set<ll> S;
unordered_map<ll, ll> mp;

void Input() {
	cin >> N, S.clear(), mp.clear();
	for (ll i = 0; i < N; i++) {
		ll d;
		cin >> d;
		S.insert(d);
		mp[d]++;
	}
}

void Solve() {
	ll mx = 0;
	for (auto it : mp)
		mx = max(mx, it.s);

	cout << max(min((ll)(S.size()), mx - 1ll), min(mx, (ll)(S.size()) - 1ll)) << endl;
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