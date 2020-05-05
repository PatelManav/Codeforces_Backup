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
//Snippets: bigint, bsearch, graph, splitstring, segtree, delta, sieve

using namespace std;

ll N;
ll arr[size_1d];
unordered_map<ll, vector<ll> > mp;

void Input() {
    cin >> N;
    N *= 2;
    for (ll i = 0; i < N; i++) {
        cin >> arr[i];
        mp[arr[i]].push_back(i);
    }
}

void Solve() {
    for (auto it : mp) {
        if (it.s.size() % 2 == 1) {
            cout << -1;
            return;
        }
    }

    for (auto it : mp) {
        for (ll i = 0; i < it.s.size() - 1; i += 2) {
            cout << it.s[i] + 1 << " " << it.s[i + 1] + 1 << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
//#endif

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