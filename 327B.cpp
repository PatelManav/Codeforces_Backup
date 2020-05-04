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

ll N;

vector<ll> arr_sieve;
void Sieve(ll lim) {
	arr_sieve.resize(lim);
	fill(all(arr_sieve), 1);
	arr_sieve[0] = arr_sieve[1] = 0;
	for (ll i = 2; i * i <= lim; i++) {
		if (arr_sieve[i])
			for (ll j = i * i; j <= lim; j += i)
				arr_sieve[j] = 0;
	}
}

void Input() {
	cin >> N;
}

void Solve() {
	Sieve(10000000);

	for (ll i = 0; i < arr_sieve.size(); i++) {
		if (arr_sieve[i]) {
			N--;
			cout << i << " ";
		}

		if (N == 0)
			return;
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