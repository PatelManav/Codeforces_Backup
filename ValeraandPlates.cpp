/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N, M, K;
vector<ll> arr;

void Input(){
    cin >> N >> M >> K, arr.clear(), arr.resize(N);
    for(auto &z:arr)
        cin >> z;
}

void Solve(){
    ll ans = 0;
    for(ll i = 0; i < N; i++){
        if(arr[i] == 1){
            if(M > 0){
                M--;
            }
            else{
                ans++;
            }
        }
        else{
            if(M > 0 or K > 0){
                if(K > 0)
                    K--;
                else
                    M--;
            }
            else{
                ans++;
            }
        }
    }

    cout << ans << endl;
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