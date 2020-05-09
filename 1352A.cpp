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

void Input() {
	cin >> n;
}

ll FastExp(ll a, ll b) {
	ll ans = 1;
	while (b) {
		if (b & 1)
			ans = (ans * a) % MOD;
		a =	(a * a) % MOD;
		b >>= 1;
	}
	return (ans % MOD);
}

void Solve() {
	vll ans;
	ll i = 0;
	while (n > 0) {
		if (n % 10 != 0)
			ans.push_back((n % 10)*FastExp(10, i));
		n /= 10;
		i++;
	}
	cout << ans.size() << endl;
	for (ll i = 0; i < ans.size(); i++)
		cout << ans[i] << " ";
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