/*May The Force Be With Me*/
#include <bits/stdc++.h>
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
#define mem(a,val) memset(a,val,sizeof(a))
//Snippets: bigint, bsearch, graph, splitstring, segtree, delta

using namespace std;

ll N;
ll arr[size_1d];

void Input() {
	N = 5;
	for (ll i = 0; i < N; i++)
		cin >> arr[i];
}

void Solve() {
	ll mn_g = arr[0] * (abs(arr[1] - arr[2])), mx_g = arr[0] * (abs(arr[1] + arr[2]));
	ll mn_p = abs(arr[3] - arr[4]), mx_p = arr[3] + arr[4];
	if ((mn_g >= mn_p and mn_g <= mx_p) or (mx_g >= mn_p and mx_g <= mx_p) or (mn_p >= mn_g and mn_p <= mx_g) or (mx_p >= mn_g and mx_p <= mx_g))
		cout << "Yes\n";
	else
		cout << "No\n";
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