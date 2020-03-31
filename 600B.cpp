/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N, M;
vector<ll> arr1, arr2;

void Input(){
    cin >> N >> M;
    arr1.resize(N);
    arr2.resize(M);
    for(auto &a:arr1)
        cin >> a;
    for(auto &z:arr2)
        cin >> z;
    sort(arr1.begin(), arr1.end());
}

void Solve(){
    ll cnt;
    for(ll i = 0 ; i < M; i++){
        cout << (upper_bound(arr1.begin(), arr1.end(), arr2[i]) - arr1.begin()) << endl;

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