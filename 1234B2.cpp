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

ll n, k;
ll arr[size_1d];

void Input() {
	cin >> n >> k;
	for (ll i = 0; i < n; i++)
		cin >> arr[i];
}

void Solve() {
	deque<ll> Q;
	map<ll, ll> mp;
	mp[arr[0]] = 1;
	Q.push_front(arr[0]);
	for (ll i = 1; i < n; i++) {
		if (mp[arr[i]] == 1)
			continue;
		if (Q.size() < k) {
			mp[arr[i]] = 1;
			Q.push_front(arr[i]);
		}
		else if (Q.size() == k) {
			ll t = Q.back();
			mp[t] = 0;
			mp[arr[i]] = 1;
			Q.push_front(arr[i]);
			Q.pop_back();
		}
	}
	cout << Q.size() << endl;
	for (auto it : Q)
		cout << it << " ";
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