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
#define f first
#define s second
#define inf INT_MAX
#define size_1d 10000000
#define size_2d 1000
//Snippets: bigint, bsearch, graph, splitstring, segtree, delta, sieve

using namespace std;

pll p1, p2, p3;

bool Valid(ll a, ll b, ll p, ll q, ll x, ll y) {
	return (a >= p + x) and (b >= max(q, y));
}

void Input() {
	cin >> p1.f >> p1.s >> p2.f >> p2.s >> p3.f >> p3.s;
}

void Solve() {
	if (Valid(p1.f, p1.s, p2.f, p2.s, p3.f, p3.s) or Valid(p1.f, p1.s, p2.s, p2.f, p3.f, p3.s) or Valid(p1.f, p1.s, p2.f, p2.s, p3.s, p3.f) or Valid(p1.f, p1.s, p2.s, p2.f, p3.s, p3.f) or Valid(p1.s, p1.f, p2.f, p2.s, p3.f, p3.s) or Valid(p1.s, p1.f, p2.s, p2.f, p3.f, p3.s) or Valid(p1.s, p1.f, p2.f, p2.s, p3.s, p3.f) or Valid(p1.s, p1.f, p2.s, p2.f, p3.s, p3.f))
		cout << "YES";
	else
		cout << "NO";
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