#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll n;
float ans;

void Input(){
    cin >> n;
}

void Solve(){
    ans = 0;
    while(n){
        ans +=  float(1)/float(n);
        n--;
    }

    cout << setprecision(12) << ans << endl;
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