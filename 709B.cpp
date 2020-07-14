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

ll n, ax;

void Input() {
    cin >> n >> ax;
}

void Solve() {
    vll a(n);
    for (ll i = 0; i < n; i++) cin >> a[i];
    if (n == 1)cout << 0;
    else if (n == 2)cout << min(abs(a[0] - ax), abs(a[1] - ax));
    else {
        sort(all(a));
        vll b, c;
        b.pb(ax), c.pb(ax);
        for (ll i = 1; i < n; i++)b.pb(a[i]);
        for (ll i = 0; i < n - 1; i++)c.pb(a[i]);
        sort(all(b)), sort(all(c));
        ll x = abs(b[b.size() - 1] - b[0]), y = abs(c[c.size() - 1] - c[0]);
        if (!(b[b.size() - 1] == ax or b[0] == ax))x = x + min(abs(b[b.size() - 1] - ax), abs(b[0] - ax));
        if (!(c[c.size() - 1] == ax or c[0] == ax))y = y + min(abs(c[c.size() - 1] - ax), abs(c[0] - ax));
        cout << min(x, y);
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