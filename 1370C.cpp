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
//Snippets: delta, sieve, fastexp, dfs, bfs, dijkstra, floodfill

using namespace std;

ll n;

void Input() {
	cin >> n;
}

void Solve() {
	if (n == 1)cout << "FastestFinger\n";
	else if (n % 2)cout << "Ashishgup\n";
	else {
		ll mx = 1, t = 0;
		for (ll i = 1; i * i < n; i++) {
			if (n % i == 0) {
				if (i % 2)mx = max(mx, i), t++;
				if ((n / i) % 2)mx = max(mx, n / i), t++;
				if (i == 1 or i == n / i)t--;
			}
		}
		if (n == 2)cout << "Ashishgup\n";
		else if (mx == 1)cout << "FastestFinger\n";
		else {
			n /= mx;
			if ((n == 2 and t > 1) or n > 2)cout << "Ashishgup\n";
			else cout << "FastestFinger\n";
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