#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll n,  m;
vector<ll> chest;
vector<ll> key;

void Input(){
    cin >> n >> m;
    chest.resize(n);
    key.resize(m);
    for(auto &z:chest)
        cin >> z;
    for(auto &z:key)
        cin >> z;
}

void Solve(){
    ll odd_c = 0, eve_c = 0, eve_k = 0, odd_k = 0;

    for(ll i = 0; i < n; i++){
        if(chest[i]%2 == 1){
            odd_c++;
        }
        else{
            eve_c++;
        }   
    }

    for(ll i = 0; i < m; i++){
        if(key[i]%2 == 1){
            odd_k++;
        }
        else{
            eve_k++;
        }
    }

    cout << min(odd_c, eve_k) + min(eve_c, odd_k) << endl;
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