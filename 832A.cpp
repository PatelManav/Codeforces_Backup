/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N, K;

void Input(){
    cin >> N >> K;
}

void Solve(){
    if((N/K)%2 == 0)
        cout << "NO\n";
    else
        cout << "YES\n";
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