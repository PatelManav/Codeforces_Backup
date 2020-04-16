/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll n, m;
vector<pair<double, double> > arr;
map<ll, ll> mp_pref;

bool MC(pair<double, double> p1, pair<double, double> p2){
    return (p1.first - p1.second) > (p2.first - p2.second);
}

void Input(){
    cin >> n >> m, arr.clear(), arr.resize(n);
    for(auto &z:arr)
        cin >> z.first >> z.second;
    sort(arr.begin(), arr.end(), MC);
    for(ll i = 0; i < n; i++)
        mp_pref[i] = arr[i].first + mp_pref[i-1];
}

void Solve(){
    ll chk = 0;
    for(ll i = 0; i < n; i++){
        chk += arr[i].second;
    }
    if(chk > m){
        cout << "-1\n";
        return;
    }

    ll ans = 0;
    for(ll i = 0; i < n; i++){
        if(mp_pref[n-1] - mp_pref[i-1] <= m){
            break;
        }
        m -= arr[i].second;
        ans++;
    }
    
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