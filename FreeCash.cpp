#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    map<pair<ll, ll>, ll> mp;
    ll ans = 0, T;
    cin >> T;
    while(T--){
    	ll first, second;
        cin >> first >> second;
        mp[make_pair(first, second)]++;
    }
    
    for(auto it:mp){
        ans = max(ans, it.second);
    }

    cout << ans << endl;
    return 0;
}   