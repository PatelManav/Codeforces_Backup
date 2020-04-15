/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N;
vector<ll> arr;

void Input(){
    cin >> N, arr.clear(), arr.resize(N/2);
    for(auto &z:arr)
        cin >> z;
    sort(arr.begin(), arr.end());
}

void Solve(){
    ll ans1 = 0, ans2 = 0;
    for(ll i = 0; i < N/2; i++){
        ans1 += abs(arr[i] - (2*i+1));
        ans2 += abs(arr[i] - (2*i+2));
    }

    cout << min(ans1, ans2) << "\n";

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