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
#define pb push_back
#define f first
#define s second
#define inf INT_MAX
#define size_1d 10000000
#define size_2d 1000
//Snippets: graph, segtree, delta, sieve, fastexp

using namespace std;

ll n;
ll arr[size_1d];

void Input() {
	cin >> n;
	for (ll i = 0; i < n; i++)
		cin >> arr[i];
}

bool Chk(ll st, ll ed, ll len) {
	map<ll, ll> mp;
	for (ll i = st; i <= ed; i++) mp[arr[i]] = 1;
	for (ll i = 1; i <= len; i++) if (mp[i] == 0) return false;
	return true;
}

void Solve() {
	ll mx = INT_MIN;
	vector<pll> ans;
	for (ll i = 0; i < n; i++) mx = max(mx, arr[i]);
	bool flg = Chk(0, mx - 1, mx) & Chk(mx, n - 1, n - mx);
	if (flg) ans.pb({mx, n - mx});
	flg = true;
	flg &= Chk(n - mx, n - 1, mx) & Chk(0, n - mx - 1, n - mx) & mx * 2 != n;
	if (flg) ans.pb({n - mx, mx});
	cout << ans.size() << endl;
	for (auto it : ans) cout << it.f << " " << it.s << endl;
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