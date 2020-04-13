/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N;
vector<ll> arr;
map<ll, ll> mp_cnt, mp_ans;

void Input(){
    cin >> N, arr.clear(), arr.resize(N);
    for(auto &z:arr){
        cin >> z;
        mp_cnt[z]++;
    }
}

void Solve(){
    for(ll i = 1; i <= 100000; i++){
        mp_ans[i] = max(mp_ans[i-1], mp_ans[i-2] + i*mp_cnt[i]);
    }

    cout << mp_ans[100000] << "\n";
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