/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N;
vector<ll> arr;

void Input(){
    cin >> N, arr.clear(), arr.resize(N);
    for(auto &z:arr)
        cin >> z;
    sort(arr.begin(), arr.end());
}

void Solve(){
    ll ans = arr[0];

    for(ll i = 1; i < N; i++)
        ans = __gcd(ans, arr[i]);

    cout << ans*N << "\n";
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