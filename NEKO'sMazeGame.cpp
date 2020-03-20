#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define MOD 1000000007
using namespace std;

ll n, q, false_count = 0;
map<pair<ll, ll>, bool> mp; //0 off, 1 lava
ll first, second;

void Input(){
    cin >> n >> q;
}

void Solve(){
    while(q--){
        cin >> first >> second;
        pair<ll, ll> point = make_pair(first, second);
        mp[point] = !mp[point];
        ll delta = (mp[point])? 1: -1;

        false_count += delta*(mp[make_pair(3 - point.first, point.second)] + mp[make_pair(3 - point.first, point.second - 1)] + mp[make_pair(3 - point.first, point.second + 1)]);

        if(!false_count){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T = 1;
    //cin >> T;
    while(T--){
        Input();
        Solve();
    }
    return 0;
}