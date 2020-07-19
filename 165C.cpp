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
#define rep(i,v,n) for(ll i = v; i < n; i++)
//Snippets: delta, sieve, fastexp, dfs, bfs, dijkstra, floodfill

using namespace std;

ll k;

void Input() {
	cin >> k;
}

void Solve() {
	string s;
	cin >> s;
	ll n = s.size();
	ll a[n] = {0};
	a[0] = (s[0] == '1');
	for (ll i = 1; i < n; i++)a[i] = a[i - 1] + (s[i] == '1');
	map<ll, pll> mp;
	ll L = 0;
	for (ll i = 1; i < n; i++) {
		if (a[i - 1] != a[i]) {
			mp[a[i - 1]] = {L, i - 1};
			L = i;
		}
	}
	mp[a[n - 1]] = {L, n - 1};
	ll ans = 0;
	for (ll i = 0; i < n; i++) {
		ll st = i, ed = n - 1, midd = -1;
		ll l;
		if (!i)l = 0;
		else l = a[i - 1];
		while (st <= ed) {
			ll mid = st + (ed - st) / 2;
			ll d = a[mid] - l;
			if (d < k)st = mid + 1;
			else if (d > k)ed = mid - 1;
			else {
				midd = mid;
				break;
			}
		}
		if (midd == -1)continue;
		ll t = mp[a[midd]].s - max(i, mp[a[midd]].f) + 1;
		ans += t;
	}
	cout << ans;
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