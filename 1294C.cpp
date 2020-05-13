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

ll n;

void Input() {
	cin >> n;
}

void Solve() {
	ll a = -1, b = -1, c = -1;
	for (ll i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			a = i;
			break;
		}
	}
	if (a == -1) {
		cout << "NO\n";
		return;
	}
	n /= a;
	for (ll i = 2; i <= sqrt(n); i++) {
		if (n % i == 0 and a != i) {
			b = i;
			break;
		}
	}
	if (b == -1) {
		cout << "NO\n";
		return;
	}
	n /= b;
	c = n;
	if (c != a and c != b and c != 1 and c != -1 and a != b) {
		cout << "YES\n";
		cout << a << " " << b << " " << c << endl;
	}
	else
		cout << "NO\n";
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