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
//Snippets: delta, sieve, fastexp, dfs, bfs, dijkstra, floodfill

using namespace std;

string s;

void Input() {
	cin >> s;
}

void Solve() {
	mll mp;
	for (ll i = 1; i * i <= 2000000001ll; i++)mp[i * i] = 1;
	ll n = s.size();
	string osf;
	ll x;
	ll ans = inf;
	for (ll a = 0; a < n; a++) {
		if (s[a] == '0')continue;
		osf = "";
		osf += s[a];
		x = stoi(osf);
		if (mp.count(x)) ans = min(ans, n - 1);
		for (ll b = a + 1; b < n; b++) {
			osf = ""; osf += s[a], osf += s[b];
			x = stoi(osf);
			if (mp.count(x)) ans = min(ans, n - 2);
			for (ll c = b + 1; c < n; c++) {
				osf = ""; osf += s[a], osf += s[b], osf += s[c];
				x = stoi(osf);
				if (mp.count(x)) ans = min(ans, n - 3);
				for (ll d = c + 1; d < n; d++) {
					osf = ""; osf += s[a], osf += s[b], osf += s[c], osf += s[d];
					x = stoi(osf);
					if (mp.count(x)) ans = min(ans, n - 4);
					for (ll e = d + 1; e < n; e++) {
						osf = ""; osf += s[a], osf += s[b], osf += s[c], osf += s[d], osf += s[e];
						x = stoi(osf);
						if (mp.count(x)) ans = min(ans, n - 5);
						for (ll f = e + 1; f < n; f++) {
							osf = ""; osf += s[a], osf += s[b], osf += s[c], osf += s[d], osf += s[e], osf += s[f];
							x = stoi(osf);
							if (mp.count(x)) ans = min(ans, n - 6);
							for (ll h = f + 1; h < n; h++) {
								osf = ""; osf += s[a], osf += s[b], osf += s[c], osf += s[d], osf += s[e], osf += s[f], osf += s[h];
								x = stoi(osf);
								if (mp.count(x)) ans = min(ans, n - 7);
								for (ll i = h + 1; i < n; i++) {
									osf = ""; osf += s[a], osf += s[b], osf += s[c], osf += s[d], osf += s[e], osf += s[f], osf += s[h], osf += s[i];
									x = stoi(osf);
									if (mp.count(x)) ans = min(ans, n - 8);
									for (ll j = i + 1; j < n; j++) {
										osf = ""; osf += s[a], osf += s[b], osf += s[c], osf += s[d], osf += s[e], osf += s[f], osf += s[h], osf += s[i], osf += s[j];
										x = stoi(osf);
										if (mp.count(x)) ans = min(ans, n - 9);
										for (ll g = j + 1; g < n; g++) {
											osf = ""; osf += s[a], osf += s[b], osf += s[c], osf += s[d], osf += s[e], osf += s[f], osf += s[h], osf += s[i], osf += s[j], osf += s[g];
											x = stoi(osf);
											if (mp.count(x)) ans = min(ans, n - 10);
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

	if (ans == inf)cout << -1;
	else cout << ans;
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