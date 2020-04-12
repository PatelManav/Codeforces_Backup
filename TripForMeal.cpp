/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N;
vector<ll> arr;

void Input(){
    cin >> N, arr.clear(), arr.resize(3);
    for(auto &z:arr)
        cin >> z;
}

void Solve(){
    ll ans = 0;
    N--;

    if(N <= 0){
        cout << "0\n";
    }
    else{
        ans += min(arr[0], arr[1]);
        N--;

        ans += min(arr[2], ans)*N;
        
        cout << ans << "\n";
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