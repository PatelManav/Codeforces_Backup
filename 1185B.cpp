/*May The Force Be With Me*/
#include <bits/stdc++.h>
#include <stdio.h>
#include <ctype.h>
#pragma GCC optimize ("Ofast")
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

string a, b;
void Input() {
	cin >> a >> b;
}

void Solve() {
	vector<pair<char, ll>> arr_a, arr_b;
	char ch = a[0];
	ll t = 1;
	for (ll i = 1; i < a.size(); i++) {
		if (ch == a[i])t++;
		else {arr_a.pb({ch, t}); ch = a[i]; t = 1;}
	}
	arr_a.pb({ch, t});
	ch = b[0], t = 1;
	for (ll i = 1; i < b.size(); i++) {
		if (ch == b[i])t++;
		else {arr_b.pb({ch, t}); ch = b[i], t = 1;}
	}
	arr_b.pb({ch, t});
	if (arr_b.size() != arr_a.size())cout << "NO\n";
	else {
		for (ll i = 0; i < arr_a.size(); i++) {
			if (arr_a[i].f == arr_b[i].f and arr_a[i].s <= arr_b[i].s)continue;
			cout << "NO\n";
			return;
		}
		cout << "YES\n";
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