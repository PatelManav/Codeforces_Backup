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
	mll mpcl, mpop;
	ll k = 0;
	while (n--) {
		string s;
		cin >> s;
		stack<char> st;
		for (auto it : s) {
			if (st.empty())st.push(it);
			else if (it == ')' and st.top() == '(')st.pop();
			else st.push(it);
		}
		ll a = 0, b = 0;
		while (!st.empty()) {
			if (st.top() == '(')a++;
			else b++;
			st.pop();
		}
		if (a and b) continue;
		if (!a and !b) k++;
		else if (!a) mpcl[b]++;
		else if (!b) mpop[a]++;
	}
	ll ans = k / 2;
	for (auto it : mpop) ans += min(it.s, mpcl[it.f]);
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