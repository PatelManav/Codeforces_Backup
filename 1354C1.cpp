/*May The Force Be With Me*/
#include <bits/stdc++.h>
#include <stdio.h>
#include <tgmath.h>
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
#define PI 3.14159265
//Snippets: graph, segtree, delta, sieve, fastexp

using namespace std;

double n;

void Input() {
	cin >> n;
	n *= 2;
}

void Solve() {
	double angle = ((n - 2) * 180) / n, side = n / 2 - 1, tilt = 0, ans = 1;
	ll N = n;
	if (N == 4) {cout << ans << endl; return;}
	if ((N / 2) % 2 == 1) tilt = side;
	else tilt = side - 1;
	ll T = tilt;
	ans *= (side - tilt);
	double arr_angle[T] = {0};
	arr_angle[0] = angle - 90;
	for (ll i = 1; i < T / 2; i++)
		arr_angle[i] = angle - (180 - arr_angle[i - 1]);
	for (ll i = 0; i < T / 2; i++)
		ans += cos(arr_angle[i] * PI / 180);
	for (ll i = 0; i < T / 2; i++)
		ans += cos(arr_angle[i] * PI / 180);
	cout.precision(16);
	cout << ans << endl;
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