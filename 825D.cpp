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

string a, b;
map<char, ll>mpa, mpb;

void Input() {
	cin >> a >> b;
}

bool check(ll mid) {
	ll c = mpa['?'];
	for (auto it : mpb) {
		ll d = mid * it.s - min(mid * it.s, mpa[it.f]);
		if (d) {
			if (d <= c)c -= d;
			else return false;
		}
	}
	return true;
}

void Solve() {
	for (auto it : a)mpa[it]++;
	for (auto it : b)mpb[it]++;
	ll l = 1, r = 1e9, midd = 0;
	while (l <= r) {
		ll mid = l + (r - l) / 2;
		if (check(mid))midd = mid, l = mid + 1;
		else r = mid - 1;
	}
	ll c = mpa['?'];
	vector<char> rep;
	for (auto it : mpb) {
		ll d = midd * it.s - min(midd * it.s, mpa[it.f]);
		c -= d;
		while (d-- > 0)rep.pb(it.f);
	}
	while (c-- > 0)rep.pb('a');
	for (auto it : a) {
		if (it == '?' and rep.size()) {cout << rep.back(); rep.pop_back();}
		else cout << it;
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