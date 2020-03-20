/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll n;
vector<ll> arr;

void Input(){
    cin >> n;
    arr.resize(n);
    for(auto &z:arr)
        cin >> z;

}

void Solve(){
    sort(arr.begin(), arr.end());
    ll prev_idx = 0;

    for(ll i = 0; i < n; i++){
        if(arr[i] > prev_idx + 1){
            cout << prev_idx + 1 << endl;
            return;
        }

        prev_idx = arr[i];
    }

    cout << prev_idx + 1 << endl;
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