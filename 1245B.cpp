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
ll a, b, c;
string str;

void Input() {
	cin >> n >> a >> b >> c;
	cin >> str;
}

void Solve() {
	ll win = 0;
	string osf = "";
	for (ll i = 0; i < n; i++) osf += "x";
	for (ll i = 0; i < n; i++) {
		if (str[i] == 'R' and b) win++, b--, osf[i] = 'P';
		if (str[i] == 'P' and c) win++, c--, osf[i] = 'S';
		if (str[i] == 'S' and a) win++, a--, osf[i] = 'R';
	}

	if (win >= (n + 1) / 2) {
		cout << "YES\n";
		for (ll i = 0; i < n; i++) {
			if (osf[i] == 'x') {
				if (a) osf[i] = 'R', a--;
				else if (b) osf[i] = 'P', b--;
				else if (c) osf[i] = 'S', c--;
			}
		}
		cout << osf << endl;
	}
	else cout << "NO\n";
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