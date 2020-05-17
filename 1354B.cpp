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

string arr;
void Input() {
	cin >> arr;
}

void Solve() {
	ll idx_1 = -1, idx_2 = -1, idx_3 = -1;
	ll size = INT_MAX;
	for (ll i = 0; i < arr.size(); i++) {
		if (arr[i] == '1') idx_1 = i;
		else if (arr[i] == '2') idx_2 = i;
		else if (arr[i] == '3') idx_3 = i;
		if (idx_3 != -1 and idx_2 != -1 and idx_1 != -1) size = min(size, max(idx_3, max(idx_2, idx_1)) - min(idx_3, min(idx_2, idx_1)) + 1);
	}

	if (idx_3 == -1 or idx_1 == -1 or idx_2 == -1) cout << 0 << endl;
	else cout << size << endl;
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