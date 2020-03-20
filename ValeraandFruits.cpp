/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll n, v;
map<pair<ll, ll>, ll> mp;
pair<ll, ll> p;

void Input(){
    cin >> n >> v;
    for(ll i = 0 ; i < n; i++){
        cin >> p.first >> p.second;
        mp[p]++;
    }
}

void Solve(){
    ll prev = 0, curr = 0, ans = 0, tv;
    
    for(ll i = 1; i <= 3001; i++){
        curr = 0;
        for(auto it:mp){
            if(it.first.first == i){
                curr += (it.first.second*it.second);
            }
        }

        if(curr + prev <= v){
            ans += curr + prev;
            prev = 0;
        }
        else{
            ans += v;
            prev = curr - max(0ll, v - prev);
        }
    }

    cout << ans << endl;
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