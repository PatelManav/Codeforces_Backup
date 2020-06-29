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

ll n;

void Input() {
	cin >> n;
}

void Solve() {
	vll a(n);
	for (ll i = 0; i < n; i++) cin >> a[i];
	vll o, e;
	for (ll i = 0; i < n; i++) {
		if (i % 2)o.pb(a[i]);
		else e.pb(a[i]);
	}
	while (o.size() < e.size())o.pb(0);
	while (e.size() < o.size())e.pb(0);
	ll x = o.size();
	vll po(x, 0), pe(x, 0);
	po[0] = o[0], pe[0] = e[0];
	for (ll i = 1; i < x; i++)po[i] = po[i - 1] + o[i];
	for (ll i = 1; i < x; i++)pe[i] = pe[i - 1] + e[i];
	ll cur = 0, ans = pe[x - 1], l = -1;
	for (ll i = 0; i < x; i++) {
		cur += o[i] - e[i];
		if (cur < 0) {
			cur = 0;
			l = i;
		}
		else {
			ll z = 0;
			if (l == -1)z = po[i] - pe[i];
			else z = (po[i] - po[l]) - (pe[i] - pe[l]);
			ll d = z + pe[x - 1];
			ans = max(ans, d);
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