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
ll arr[size_1d];
map<ll, ll> mp;

void Input() {
	cin >> n, mp.clear();
	for (ll i = 0; i < n; i++) {
		cin >> arr[i];
		mp[i] = mp[i - 1] + arr[i];
	}
}

void Solve() {
	ll prev = 0, move = 0, frnt = 0, bck = n - 1, a = 0, b = 0;
	bool isalice = true;

	while (frnt <= bck) {
		ll sum = 0;
		if (isalice) {
			for (ll i = frnt; i <= bck; i++) {
				sum += arr[i];
				if (sum > prev) {
					frnt = i + 1;
					break;
				}
			}
			if (sum <= prev)
				frnt = n - 1;
		}
		else {
			for (ll i = bck; i >= frnt; i--) {
				sum += arr[i];
				if (sum > prev) {
					bck = i - 1;
					break;
				}
			}
			if (sum <= prev)
				bck = 0;
		}
		move++;
		prev = sum;
		if (isalice)
			a += sum;
		else
			b += sum;
		isalice = !isalice;
	}
	cout << move << " " << a << " " << b << endl;
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