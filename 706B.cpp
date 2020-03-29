/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N, Q;
vector<ll> arr_price, arr_money;

void Input(){
    cin >> N, arr_price.clear(), arr_price.resize(N);
    for(auto &z: arr_price)
        cin >> z;
    cin >> Q, arr_money.clear(), arr_money.resize(Q);
    for(auto &z: arr_money)
        cin >> z;
}

void Solve(){
    sort(arr_price.begin(), arr_price.end());
    for(ll i = 0; i < Q; i++){
        vector<ll>::iterator it;
        it = upper_bound(arr_price.begin(), arr_price.end(), arr_money[i]);
        cout << it - arr_price.begin() << "\n";
    }
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