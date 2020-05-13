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
#define size_2d 1000
//Snippets: graph, segtree, delta, sieve, fastexp

using namespace std;

ll n;
vector<pair<ll, pair<ll, ll>>> arr;
map<ll, ll> mp;

bool MC(pair<ll, pair<ll, ll>> p1, pair<ll, pair<ll, ll>> p2) {
	return p1.f > p2.f;
}

void Input() {
	cin >> n;
	n *= 2;
	for (ll i = 1; i <= n; i++) {
		for (ll j = 1; j < i; j++) {
			ll d;
			cin >> d;
			arr.push_back({d, {i, j}});
		}
	}
	sort(all(arr), MC);
}

void Solve() {
	ll ans[n + 1] = {0};
	for (ll i = 0; i < arr.size(); i++) {
		if (!mp.count(arr[i].s.f) and !mp.count(arr[i].s.s)) {
			ans[arr[i].s.f] = arr[i].s.s;
			ans[arr[i].s.s] = arr[i].s.f;
			mp[arr[i].s.f] = 1;
			mp[arr[i].s.s] = 1;
		}
	}
	for (ll i = 1; i < n + 1; i++)
		cout << ans[i] << " ";
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