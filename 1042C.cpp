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
#define rep(i,v,n) for(ll i = v; i < n; i++)
//Snippets: delta, sieve, fastexp, dfs, bfs, dijkstra, floodfill

using namespace std;

ll n;

void Input() {
	cin >> n;
}

void Solve() {
	vll a(n);
	for (ll i = 0; i < n; i++) cin >> a[i];
	mll rem;
	vll z, mul;
	ll ne = 0, mxne = -inf, idne;
	for (ll i = 0; i < n; i++) {
		if (!a[i]) {
			z.pb(i);
		}
		else if (a[i] < 0) {
			ne++;
			if (mxne < a[i])idne = i;
			mxne = max(mxne, a[i]);
		}
	}

	bool f = false;
	if (z.size()) {
		for (ll i = 0; i < z.size() - 1; i++) {cout << "1 " << z[i] + 1 << " " << z[i + 1] + 1 << endl; rem[z[i]]++;}
		rem[z[z.size() - 1]]++;
		f = true;
	}

	if (ne % 2) {
		rem[idne]++;
		if (f)cout << "1 " << idne + 1 << " " << z.back() + 1 << endl;
		else cout << "2 " << idne + 1 << endl;
	}

	if (f and rem.size() != a.size())cout << "2 " << z.back() + 1 << endl;

	for (ll i = 0; i < n; i++) if (!rem.count(i))mul.pb(i);

	if (mul.size() > 1)for (ll i = 0; i < mul.size() - 1; i++)cout << "1 " << mul[i] + 1 << " " << mul[i + 1] + 1 << endl;

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