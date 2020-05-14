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

string str;

void Input() {
	cin >> str;
}

void Solve() {
	ll cnt_l = 0, cnt_r = 0, cnt_u = 0, cnt_d = 0;
	for (ll i = 0; i < str.size(); i++) {
		if (str[i] == 'L')
			cnt_l++;
		if (str[i] == 'R')
			cnt_r++;
		if (str[i] == 'U')
			cnt_u++;
		if (str[i] == 'D')
			cnt_d++;
	}

	if (min(cnt_u, cnt_d) == 0) {
		if (min(cnt_l, cnt_r) >= 1) {
			cout << "2\nLR\n";
			return;
		}
		else {
			cout << 0 << endl;
			return;
		}
	}
	else if (min(cnt_l, cnt_r) == 0) {
		if (min(cnt_u, cnt_d) >= 1) {
			cout << "2\nUD\n";
			return;
		}
		else {
			cout << 0 << endl;
			return;
		}
	}

	ll ans = 2 * (min(cnt_l, cnt_r) + min(cnt_u, cnt_d));
	cout << ans << endl;
	for (ll i = 0; i < min(cnt_l, cnt_r); i++)
		cout << "R";
	for (ll i = 0; i < min(cnt_u, cnt_d); i++)
		cout << "U";
	for (ll i = 0; i < min(cnt_l, cnt_r); i++)
		cout << "L";
	for (ll i = 0; i < min(cnt_u, cnt_d); i++)
		cout << "D";
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