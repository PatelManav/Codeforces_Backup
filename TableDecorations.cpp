/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N;
vector<ll> arr;

void Input(){
    N = 3, arr.clear(), arr.resize(N);
    for(auto &z:arr)
        cin >> z;
    sort(arr.begin(), arr.end());
}

void Solve(){
    ll ans = min(arr[0]+arr[1], (arr[0]+arr[1]+arr[2])/3);

    cout << ans << "\n";
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


