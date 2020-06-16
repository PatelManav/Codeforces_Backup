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

ll m;

void Input() {
}

void Solve() {
	string s; cin >> s; cin >> m;
	vector<pll> a(m);
	for (ll i = 0; i < m; i++)cin >> a[i].f, a[i].s = i;
	vector<pll> b = a;
	sort(all(s)), sort(rall(a));
	string ans; ans.resize(m);
	for (ll i = 0; i < m; i++) ans[a[i].s] = s[i];
	for (ll i = 0; i < m; i++) {
		ll t = 0;
		bool f = false;
		for (ll j = 0; j < m; j++) if (ans[j] > ans[i])t += abs(i - j);
		if (t != b[i].f) {
			for (ll k = i + 1; k < m; k++) {
				t = 0;
				for (ll j = 0; j < m; j++) if (ans[j] > ans[k])t += abs(i - j);
				if (t == b[i].f) {
					f = true;
					swap(ans[i], ans[k]);
					break;
				}
			}
		}
		else f = true;
		if (!f) {
			for (ll k = m; k < s.size(); k++) {
				t = 0;
				for (ll j = 0; j < m; j++) if (ans[j] > s[k])t += abs(i - j);
				if (t == b[i].f) {
					f = true;
					swap(ans[i], s[k]);
					break;
				}
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