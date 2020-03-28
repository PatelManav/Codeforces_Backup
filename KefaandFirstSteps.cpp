/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N;
vector<ll> arr;

ll MaxLn(){
    ll ans = 1;
    vector<ll> dp;
    dp.resize(N+1);
    for(ll i = 0; i <= N; i++)
        dp[i] = 1;
    
    for(ll i = 1; i < N; i++){
        if(arr[i] >= arr[i-1]){
            dp[i+1] = dp[i] + 1;
        }
        ans = max(ans, dp[i+1]);
    }

    return ans;
}

void Input(){
    cin >> N, arr.clear(), arr.resize(N);

    for(auto &z:arr)
        cin >> z;

}

void Solve(){
    cout << MaxLn() << "\n";
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