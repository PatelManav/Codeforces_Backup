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
map<ll, vector<ll> > mp;
vector<pll> ans;

void Input() {
	cin >> N;
	for (ll i = 0; i < N; i++) {
		cin >> arr[i];
		mp[arr[i]].push_back(i);
	}
}

void Solve() {
	ll cnt = 0;
	for (auto it : mp) {
		ll d;
		if (it.s.size() == 1) {
			d = 0;
			cnt++;
			ans.push_back({it.f, d});
			continue;
		}
		d = it.s[1] - it.s[0];
		bool flg = true;
		for (ll i = 0; i < it.s.size() - 1; i++) {
			if ((it.s[i + 1] - it.s[i]) != d) {
				flg = false;
				break;
			}
		}
		if (flg) {
			cnt++;
			ans.push_back({it.f, d});
		}
	}

	cout << cnt << endl;
	for (ll i = 0; i < ans.size(); i++)
		cout << ans[i].f << " " << ans[i].s << endl;

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