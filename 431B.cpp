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
#define size_2d 10000
//Snippets: bigint, bsearch, graph, splitstring, segtree, delta

using namespace std;
ll g[5][5];

void Input() {
}

void Solve() {
	int n = 5;
	for (int i = 0 ; i < n ; ++i)
		for (int j = 0 ; j < n ; ++j)
			cin >> g[i][j];
	int p[6], pans[6], ans = -1, tmp;
	for (int i = 0 ; i < n ; ++i)
		p[i] = i;

	do
	{
		//01234
		tmp = g[p[0]][p[1]] + g[p[1]][p[0]];
		tmp += g[p[2]][p[3]] + g[p[3]][p[2]];

		//1234
		tmp += g[p[1]][p[2]] + g[p[2]][p[1]];
		tmp += g[p[3]][p[4]] + g[p[4]][p[3]];

		//234
		tmp += g[p[2]][p[3]] + g[p[3]][p[2]];

		//34
		tmp += g[p[3]][p[4]] + g[p[4]][p[3]];

		if (tmp > ans)
		{
			ans = tmp;
			for (int i = 0 ; i < n ; ++i)
				pans[i] = p[i];
		}
	}
	while (next_permutation(p, p + n));

	cout << ans << "\n";
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