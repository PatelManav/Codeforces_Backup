/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N, K;
vector<ll> arr;

void Input(){
    cin >> N >> K, arr.clear(), arr.resize(2*N+1);
    for(auto &z:arr)
        cin >> z;
}

void Solve(){
    for(ll i = 1; i < 2*N+1; i+=2){
        if(K and arr[i]-arr[i-1] > 1 and arr[i]-arr[i+1] > 1){
            K--;
            arr[i]--;
        }
    }

    for(ll i = 0; i < 2*N+1; i++)
        cout << arr[i] << " ";
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