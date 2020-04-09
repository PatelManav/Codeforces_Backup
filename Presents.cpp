/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N;
vector<ll> arr;
map<ll, ll> mp;

void Input(){
    cin >> N, arr.clear(),  arr.resize(N), mp.clear();
    for(auto &z:arr)
        cin >> z;
}

void Solve(){
    for(ll i = 0; i < N; i++){
        mp[arr[i]] = i+1;
    }

    for(auto it:mp)
        cout << it.second << " ";
    cout << "\n";
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