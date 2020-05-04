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
#define size_2d 10000
//Snippets: bigint, bsearch, graph, splitstring, segtree, delta

using namespace std;

ll N, M;
ll arr[size_1d];
priority_queue<ll> PQ;
priority_queue<ll, vll, greater<ll> > PQ2;

void Input() {
	cin >> N >> M;
	for (ll i = 0; i < M; i++) {
		cin >> arr[i];
		PQ.push(arr[i]);
		PQ2.push(arr[i]);
	}
}

void Solve() {
	ll mx = 0, mn = 0;
	for (ll i = 0; i < N; i++) {
		ll v = 0;
		if (!PQ.empty()) {
			v = PQ.top();
			PQ.pop();
		}
		mx += v;
		v--;
		if (v > 0)
			PQ.push(v);
	}
	cout << mx << " ";
	for (ll i = 0; i < N; i++) {
		ll v = 0;
		if (!PQ2.empty()) {
			v = PQ2.top();
			PQ2.pop();
		}
		mn += v;
		v--;
		if (v > 0)
			PQ2.push(v);
	}
	cout << mn;

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