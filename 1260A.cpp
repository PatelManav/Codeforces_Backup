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

ll a, b;

void Input() {
	cin >> a >> b;
}

void Solve() {
	if (a >= b) cout << b << endl;
	else {
		if (b % a == 0) cout << (b / a)*(b / a)*a << endl;
		else {
			ll d = b / a + 1;
			ll ans = 0;
			for (ll i = 1; i <= a; i++) {
				if (((a - i) + 1) * (d - 1) == b) {
					ans += ((a - i) + 1) * ((d - 1) * (d - 1));
					break;
				}
				ans += d * d;
				b -= d;
			}
			cout << ans << endl;
		}
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