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

ll n, m;
string str;
vll sum;


void Input() {
	cin >> n >> m >> str, sum.clear(), sum.resize(n);
	fill(all(sum), 0);
	for (ll i = 0; i < m; i++) {
		ll d;
		cin >> d;
		sum[d - 1]++;
	}
}

void Solve() {
	ll ans[26] = {0};

	for (ll i = n - 2; i >= 0; i--)
		sum[i] = sum[i + 1] + sum[i];

	for (ll i = 0; i < n; i++)
		ans[str[i] - 'a'] += sum[i] + 1;

	for (ll i = 0; i < 26; i++)
		cout << ans[i] << " ";
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