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
string str;

void Input() {
	cin >> n >> str;
}

void Solve() {
	//white
	vll ans;
	string STR = str;
	for (ll i = 0; i < n - 1; i++) {
		if (str[i] == 'W') continue;
		if (str[i] == 'B' and i > 0 and str[i - 1] == 'B') {
			str[i] = 'W', str[i - 1] = 'W';
		}
		else {
			str[i] = 'W';
			if (str[i + 1] == 'W') str[i + 1] = 'B';
			else str[i + 1] = 'W';
		}
		ans.pb(i + 1);
	}

	if (str[n - 1] == 'W') {
		cout << ans.size() << endl;
		for (ll i = 0; i < ans.size(); i++) cout << ans [i] << " ";
		return;
	}

	//Black
	ans.clear();
	str = STR;
	for (ll i = 0; i < n - 1; i++) {
		if (str[i] == 'B') continue;
		if (str[i] == 'W' and i > 0 and str[i - 1] == 'W') {
			str[i] = 'B', str[i - 1] = 'B';
		}
		else {
			str[i] = 'B';
			if (str[i + 1] == 'W') str[i + 1] = 'B';
			else str[i + 1] = 'W';
		}
		ans.pb(i + 1);
	}

	if (str[n - 1] == 'B') {
		cout << ans.size() << endl;
		for (ll i = 0; i < ans.size(); i++) cout << ans [i] << " ";
		return;
	}

	cout << -1 << endl;
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