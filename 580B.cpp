/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll n, d;
vector<pair<ll ,ll > > arr;
map<ll, ll> mp;

void Input(){
    cin >> n >> d, arr.resize(n);
    mp[-1] = 0;
    for(auto &z:arr){
        cin >> z.first >> z.second;
    }
    sort(arr.begin(), arr.end());
    mp[0] = arr[0].second;
    for(ll i = 1; i < n; i++)
        mp[i] = arr[i].second + mp[i-1];
}

void Solve(){
    ll ans = 0;
    for(ll i = 0; i < n; i++){
        ll st = i, ed = n-1;
        ll t_ans = 0;
        while(st <= ed){
            ll mid = st + (ed-st)/2;
            if(arr[mid].first - arr[st].first > d)
                ed = mid -1;
            else{
                st = mid + 1;
                t_ans = max(mp[mid] - mp[st-1], t_ans);
            }
        }
        ans = max(t_ans ,ans);
    }

    for(ll i = 0; i < n; i++)
        ans = max(ans, arr[i].second);

    cout << ans;

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