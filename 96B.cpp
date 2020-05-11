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
//Snippets: bigint, bsearch, graph, splitstring, segtree, delta, sieve, fastexp

using namespace std;

ll n;
vll arr;

void Fun(ll num, ll f, ll s) {
	if (num > 100000000000ll)
		return;
	if (f == s)
		arr.push_back(num);
	Fun(num * 10 + 4, f + 1, s);
	Fun(num * 10 + 7, f, s + 1);
}

void Input() {
	cin >> n;
	Fun(0, 0, 0);
	sort(all(arr));
}

void Solve() {
	ll i = 0;
	for (; arr[i] < n; i++);
	cout << arr[i];
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