/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

map<ll, ll> mp;

void Input(){
    mp.clear();
    for(ll i = 1; i <= 6; i++)
        cin >> mp[i];
}

void Solve(){
    ll ans = ((mp[4] + mp[3] + mp[2])*(mp[4] + mp[3] + mp[2]) - mp[4]*mp[4] - mp[2]*mp[2] - mp[6]*mp[6]);
    cout << ans << "\n";
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