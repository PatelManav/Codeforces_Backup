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

ll n, l;
ll arr[size_1d], brr[size_1d];

void Input() {
	cin >> n >> l;
	for (ll i = 0; i < n; i++)
		cin >> arr[i];
	for (ll i = 0; i < n; i++)
		cin >> brr[i];
}

void Solve() {
	queue<ll> p, q;
	for (ll i = 1; i < n; i++) {
		p.push(arr[i] - arr[i - 1]);
		q.push(brr[i] - brr[i - 1]);
	}
	p.push(l + arr[0] - arr[n - 1]);
	q.push(l + brr[0] - brr[n - 1]);
	while (n--) {
		if (p == q) {
			cout << "YES";
			return;
		}
		ll d = p.front();
		p.pop();
		p.push(d);
	}
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