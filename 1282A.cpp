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

ll a, b, c, r;

void Input() {
	cin >> a >> b >> c >> r;
}

void Solve() {
	ll s1 = c - r, s2 = c + r;
	ll t = min(a, b);
	b = max(a, b);
	a = t;
	if (s1 >= a and s2 <= b) cout << (b - a) - (s2 - s1) << endl;
	else if (s1 > b or s2 < a) cout << b - a << endl;
	else if (s1 >= a) cout << (b - a) - (b - s1) << endl;
	else if (s2 <= b) cout << (b - a) - (s2 - a) << endl;
	else if (s1 <= a and s2 >= b) cout << 0 << endl;
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