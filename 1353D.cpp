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
//Snippets: graph, segtree, delta, sieve, fastexp

using namespace std;

ll n;

void Input() {
	cin >> n;
}

struct MC {
	bool operator()(const pair<ll, pll> &k1, const pair<ll, pll> &k2) {
		if (k1.f != k2.f) return k1.f < k2.f;
		return k1.s.f > k2.s.f;
	}
};

void Solve() {
	vll a(n);
	fill(all(a), 0);
	priority_queue<pair<ll, pll>, vector<pair<ll, pll>>, MC> pq;
	pq.push({n, {0, n - 1}});
	ll i = 1;
	while (!pq.empty()) {
		pair<ll, pll> p = pq.top();
		pq.pop();
		if (p.s.f == p.s.s) {
			a[p.s.f] = i++;
			continue;
		}
		ll mid = (p.s.f + p.s.s) / 2;
		a[mid] = i++;
		if (mid - 1 >= p.s.f) pq.push({mid - p.s.f, {p.s.f, mid - 1}});
		if (mid + 1 <= p.s.s) pq.push({p.s.s - mid, {mid + 1, p.s.s}});
	}
	for (auto it : a)cout << it << " ";
	cout << endl;
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