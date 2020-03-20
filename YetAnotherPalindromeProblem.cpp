/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N;
vector<ll> arr;
map<ll, ll> mp_cnt, mp_cnt_overall;

void Input(){
    cin >> N, arr.clear(), arr.resize(N), mp_cnt.clear(), mp_cnt_overall.clear();
    for(auto &z:arr)
        cin >> z;
}

void Solve(){
    mp_cnt[arr[0]]++;
    mp_cnt_overall[arr[0]]++;
    for(ll i = 1; i < N; i++){
        mp_cnt_overall[arr[i]]++;
        if(arr[i] != arr[i-1])
            mp_cnt[arr[i]]++;
        
        if(mp_cnt[arr[i]] >= 2 or mp_cnt_overall[arr[i]] >= 3){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T;
    cin >> T;
    while(T--){
        Input();
        Solve();
    }
    return 0;
}