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
	mll ans;
	queue<ll>q;
	for (ll i = 0; i <= 30; i++) {
		if (n & (1 << i)) {
			if (i) q.push(1 << i);
			ans[1 << i]++;
		}
	}
	if (ans.size() > k)cout << "NO";
	else {
		ll x = ans.size();
		while (x < k and !q.empty()) {
			ll z = q.front();
			q.pop();
			ans[z]--;
			ans[z / 2] += 2;
			if (z / 2 > 1)q.push(z / 2), q.push(z / 2);
			x++;
		}
		if (x < k)cout << "NO";
		else {
			cout << "YES\n";
			for (auto it : ans) for (ll i = 0; i < it.s; i++)cout << it.f << " ";
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