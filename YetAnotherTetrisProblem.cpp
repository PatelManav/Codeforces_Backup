/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N;
vector<ll> arr;

void Input(){
    cin >> N, arr.clear(), arr.resize(N);
    for(auto &z:arr){
        cin >> z;
    }

}

void Solve(){
    ll parity = arr[0]%2;
    for(ll i = 1; i < N; i++){
        if(parity != arr[i]%2){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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