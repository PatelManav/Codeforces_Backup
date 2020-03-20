#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll X;

void Input(){
    cin >> X;
}

ll lcm(ll a, ll b){
    return a*b/__gcd(a, b);
}

void Solve(){
    ll ans;
    for(ll i = 1; i*i <= X; i++){
        if(X%i == 0 and lcm(i, X/i) == X){
            ans = i;
        }
    }

    cout << ans << " " << X/ans << endl;
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