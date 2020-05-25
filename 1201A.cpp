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

ll n, m;

void Input() {
	cin >> n >> m;
}

void Solve() {
	string str[n];
	for (ll i = 0; i < n; i++) cin >> str[i];
	ll arr[m];
	for (ll i = 0; i < m; i++) cin >> arr[i];
	ll ans = 0;
	for (ll i = 0; i < m; i++) {
		ll cnt[5] = {0};
		for (ll j = 0; j < n; j++) {
			cnt[str[j][i] - 'A']++;
		}
		ll t = 0;
		sort(cnt, cnt + 5);
		ans += cnt[4] * arr[i];
	}
	cout << ans << endl;
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