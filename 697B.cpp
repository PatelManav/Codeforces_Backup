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

string str;

void Input() {
	cin >> str;
}

void Solve() {
	bool flg = false;
	string osf = "", osf2 = "";
	for (ll i = 0; i < str.size(); i++) {
		if (str[i] == 'e') {
			flg = true;
			continue;
		}

		if (flg)
			osf2 += str[i];
		else
			osf += str[i];
	}

	ll e = stoi(osf2);
	flg = false;

	for (ll i = 0; i < osf.size() - 1; i++) {
		if (osf[i] == '.')
			flg = true;
		if (flg and e) {
			swap(osf[i], osf[i + 1]);
			e--;
		}
	}

	if (e) {
		osf[osf.size() - 1] = '0';
		e--;
		while (e) {
			osf += '0';
			e--;
		}
	}
	else if (osf[osf.size() - 1] == '.') {
		osf[osf.size() - 1] = ' ';
	}
	else {
		ll idx = -1;
		for (ll i = osf.size() - 1; i >= 0; i--) {
			if (osf[i] == '0')
				osf[i] = ' ';
			else {
				idx = i;
				break;
			}
		}
		if (idx != -1) {
			if (osf[idx] == '.')
				osf[idx] = ' ';
		}
	}

	cout << osf;
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