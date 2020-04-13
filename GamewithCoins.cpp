/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N;
vector<ll> arr;

void Input(){
    cin >> N, arr.clear(), arr.resize(N+1);
    arr[0] = 0;
    for(ll i = 1; i <= N; i++)
        cin >> arr[i];
}

void Solve(){
    if(N <= 2 or N%2 == 0){
        cout << "-1\n";
    }
    else{
        ll ans = 0;
        for(ll i = N; i >= 2; i--){
            if(arr[i] == 0)
                continue;
            ans += arr[i];

            if(i%2 == 1){
                arr[i-1] = max(0ll, arr[i-1]-arr[i]);
                arr[(i-1)/2] = max(0ll, arr[(i-1)/2]-arr[i]);
            }
            else{
                arr[i/2] = max(arr[i/2]-arr[i], 0ll);
            }
            arr[i] = 0;
        }
        cout << ans + arr[1] << "\n";
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