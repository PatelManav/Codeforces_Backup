/*May The Force Be With Me*/
#include <bits/stdc++.h>
#include <stdio.h>
#include <ctype.h>
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
//Snippets: bigint, bsearch, graph, splitstring, segtree, delta

using namespace std;

ll N;
ll arr[size_1d];
map<ll, ll> mp;
vector<pair<ll, pll>> ans;

void Input() {
	cin >> N;
	for (ll i = 0; i < N; i++) {
		cin >> arr[i];
		mp[arr[i]]++;
	}
}

void Solve() {
	//124 126 136
	ll t;
	t = min(mp[1], min(mp[2], mp[4]));
	mp[1] -= t, mp[2] -= t, mp[4] -= t;
	while (t--)
		ans.push_back({1, {2, 4}});
	t = min(mp[1], min(mp[2], mp[6]));
	mp[1] -= t, mp[2] -= t, mp[6] -= t;
	while (t--)
		ans.push_back({1, {2, 6}});
	t = min(mp[1], min(mp[3], mp[6]));
	mp[1] -= t, mp[3] -= t, mp[6] -= t;
	while (t--)
		ans.push_back({1, {3, 6}});
	for (auto it : mp) {
		if (it.s != 0) {
			cout << "-1";
			return;
		}
	}

	for (ll i = 0; i < ans.size(); i++)
		cout << ans[i].f << " " << ans[i].s.f << " " << ans[i].s.s << endl;

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
	//ll t = 1;
	while (T--) {
		Input();
		//cout << "Case " << t << ": ";
		Solve();
		//t++;
	}
	return 0;
}