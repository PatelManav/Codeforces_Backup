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
string str;
pll arr[100];

void Input() {
	cin >> n >> str;
	for (ll i = 0; i < n; i++)
		cin >> arr[i].f >> arr[i].s;
}

void Solve() {
	ll t = 1000;
	ll time = 0;
	ll ans = 0;
	for (ll i = 0; i < n; i++)ans += (str[i] == '1');
	while (t--) {
		ll t_ams = 0;
		for (ll i = 0; i < n; i++) {
			if (time >= arr[i].s and (time - arr[i].s) % arr[i].f == 0) str[i] = (str[i] == '1') ? '0' : '1';
			t_ams += (str[i] == '1');
		}
		ans = max(t_ams, ans);
		time++;
	}
	cout << ans;
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