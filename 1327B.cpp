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

void Input() {
	cin >> n;
}

void Solve() {
	map<ll, ll> mp;
	bool flg = true;
	ll daugh = 0;
	for (ll j = 1; j <= n; j++) {
		ll d; cin >> d;
		ll arr[d];
		for (ll i = 0; i < d; i++) cin >> arr[i];
		bool t_flg = false;
		for (ll i = 0; i < d; i++) {
			if (mp[arr[i]] == 0) {
				t_flg = true;
				mp[arr[i]] = 1;
				break;
			}
		}
		if (!t_flg) daugh = j;
		flg &= t_flg;
	}
	if (flg) cout << "OPTIMAL\n";
	else {
		cout << "IMPROVE\n";
		for (ll i = 1; i <= n; i++)
			if (mp[i] == 0) {
				cout << daugh << " " << i << endl;
				return;
			}
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