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
#define pb push_back
#define f first
#define s second
#define inf INT_MAX
#define size_1d 10000000
#define size_2d 1000
//Snippets: graph, segtree, delta, sieve, fastexp

using namespace std;

double h, c, t;

void Input() {
	cin >> h >> c >> t;
}

void Solve() {
	if (t >= h) cout << 1 << endl;
	else if (t <= (h + c) / 2) cout << 2 << endl;
	else {
		ll st = 1, ed = 1000000, T = 0;
		double ans = INT_MAX;
		while (st <= ed) {
			ll md = st + (ed - st) / 2;
			double MD = md;
			double d = (MD * (h + c) - c) / (2 * MD - 1);
			if (ans > abs(t - d))T = md;
			else if (ans == abs(t - d))T = min(T, md);
			ans = min(ans, abs(t - d));
			if (d > t)st = md + 1;
			else if (d < t)ed = md - 1;
			else break;
		}
		cout << T + (T - 1) << endl;
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