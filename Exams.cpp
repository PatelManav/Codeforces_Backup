#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

struct MyComp{
    bool operator()(pair<ll, ll> p1, pair<ll, ll> p2) const {
        if(p1.first == p2.first)
            return p1.second < p2.second;
                
        return p1.first < p2.first;
    }
};

ll n, prev_day;
map<pair<ll, ll>, ll, MyComp> mp;

void Input(){
    cin >> n;
    pair<ll, ll> p;

    for(ll i = 0; i < n; i++){
        cin >> p.first >> p.second;
        mp[p] = 1;
    }
}

void Solve(){
    prev_day = INT_MIN;

    for(auto it:mp){
        if(prev_day <= min(it.first.first, it.first.second)){
            prev_day = min(it.first.first, it.first.second);
        }
        else{
            prev_day = max(it.first.first, it.first.second);
        }
    }

    cout << prev_day << endl;
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