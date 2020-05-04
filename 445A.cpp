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

ll N, M;
ll visited[100][100];
char arr[100][100], ans[100][100];
ll dr[4] = { -1, +1, 0, 0};
ll dc[4] = {0, 0, -1, +1};

void FloodFill(ll i, ll j) {
	char color;
	if (ans[i][j] == 'B')
		color = 'W';
	else
		color = 'B';

	visited[i][j] = 1;

	for (ll k = 0; k < 4; k++) {
		if (i + dr[k] < 0 or i + dr[k] >= N or j + dc[k] < 0 or j + dc[k] >= M)
			continue;

		if ((visited[i + dr[k]][j + dc[k]]))
			continue;

		ans[i + dr[k]][j + dc[k]] = color;

		FloodFill(i + dr[k], j + dc[k]);
	}

	return;
}

void Input() {
	cin >> N >> M;
	for (ll i = 0; i < N; i++)
		for (ll j = 0; j < M; j++)
			cin >> arr[i][j];

	for (ll i = 0; i < N; i++)
		for (ll j = 0; j < M; j++)
			visited[i][j] = 0;

	ans[0][0] = 'B';
}

void Solve() {
	FloodFill(0, 0);

	for (ll i = 0; i < N; i++) {
		for (ll j = 0; j < M; j++) {
			if (arr[i][j] == '-')
				cout << '-';
			else
				cout << ans[i][j];
		}
		cout << endl;
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