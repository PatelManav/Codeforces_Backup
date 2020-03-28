/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll arr_change[5] = {1, 5, 10, 20, 100};
ll N;

ll MaxChng(){
    ll ans = 0;

    for(ll i = 4; i >= 0; i--){
        ans += N/arr_change[i];
        N %= arr_change[i];
    }

    return ans;

}

void Input(){
    cin >> N;
}

void Solve(){
    cout << MaxChng() << "\n";
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