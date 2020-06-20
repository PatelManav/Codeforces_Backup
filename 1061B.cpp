/*May The Force Be With Me*/
#include <bits/stdc++.h>
#include <stdio.h>
#include <ctype.h>
#pragma GCC optimize ("Ofast")
#define ll long long
#define MOD 1000000007
#define endl "\n"
#define vint vector<long long>
#define mint map<long long,long long>
#define pint pair<long long, long long>
#define all(c) c.begin(),c.end()
#define rall(c) c.rbegin(),c.rend()
#define pb push_back
#define f first
#define s second
#define inf INT_MAX
#define size_1d 10000000
#define size_2d 1000
//Snippets: delta, sieve, fastexp, dfs, bfs, dijkstra, floodfiint

using namespace std;

int n, m;

void Input() {
	cin >> n >>  m;
}

void Solve() {
	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	int ans = 0;
	sort(rall(a));
	map<int, int> mp;
	for (int i = 0; i < n; i++) ans += a[i] - 1, mp[a[i]]++;
	vector<int> b;
	for (int i = 1; i <= a[0]; i++)if (!mp.count(i))b.pb(i);
	reverse(all(b));
	int t = 0;
	for (int i = 1; i < n; i++) {
		if (t >= b.size())break;
		while (b[t] > a[i] and t < b.size())t++;
		if (t >= b.size())break;
		if (mp[a[i]] > 1) {
			mp[a[i]]--, mp[b[t]]++;
			t++;
		}
	}
	for (int i = 1; i <= a[0]; i++)if (mp[i] == 0)ans--;
	cout << ans;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int T = 1;
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