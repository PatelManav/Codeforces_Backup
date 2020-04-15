/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N, M;
vector<ll> arr;

void Input(){
    cin >> N >> M, arr.clear(), arr.resize(N);
    for(auto &z:arr)
        cin >> z;
    sort(arr.begin(), arr.end());
}

void Solve(){
    ll i = 0, ans = 0;
    while(M and arr[i] <= 0){
        ans += arr[i];
        i++, M--;
    }
    cout << (-ans) << "\n";
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
