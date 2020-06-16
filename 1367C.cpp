/*May The Force Be With Me*/
#include <bits/stdc++.h>
#include <stdio.h>
#include <ctype.h>
#pragma GCC optimize ("Ofast")
#define ll long long
#define MOD 1000000007
#define endl "\n"
#define vll vector<long long>
#define mll map<long long,long long>
#define pll pair<long long, long long>
#define all(c) c.begin(),c.end()
#define rall(c) c.rbegin(),c.rend()
#define pb push_back
#define f first
#define s second
#define inf INT_MAX
#define size_1d 10000000
#define size_2d 1000
//Snippets: delta, sieve, fastexp, dfs, bfs, dijkstra, floodfill

using namespace std;

ll n, k;

void Input() {
	cin >> n >> k;
}

void Solve() {
	string s;
	cin >> s;
	set<ll> st;
	for (ll i = 0; i < n; i++) {
		if (s[i] == '1')st.insert(i);
	}
	ll ans = 0;
	for (ll i = 0; i < n; i++) {
		if (s[i] == '0') {
			auto it = st.lower_bound(i);
			ll l, r;
			if (it == st.end())r = inf;
			else r = *it;
			if (it == st.begin())l = -inf;
			else {it--, l = *it;}
			if (abs(l - i) > k and abs(r - i) > k) {
				ans++;
				st.insert(i);
			}
		}
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