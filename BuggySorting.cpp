/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N;
//vector<ll> arr;

void Input(){
    cin >> N;
}

void Solve(){
    if(N <= 2){
        cout << "-1\n";
    }
    else{
        for(ll i = N; i >= 1; i--)
            cout << i << " ";
    }
    cout << "\n";

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