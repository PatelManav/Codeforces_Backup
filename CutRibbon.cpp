/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll n, a, b, c;
map<ll, ll> dp;

ll MaxNum(ll n){
    if(n <= 0)
        return 0;
    
    if(dp.count(n))
        return dp[n];
    
    ll op1 = INT_MIN; ll op2 = INT_MIN; ll op3 = INT_MIN;

    if(n - a >= 0)
        op1 = MaxNum(n-a);
    
    if(n - b >= 0)
        op2 = MaxNum(n-b);
    
    if(n - c >= 0)
        op3 = MaxNum(n-c);
    
    dp[n] = max(op1, max(op2, op3)) + 1;

    return dp[n];
}

void Input(){
    cin >> n >> a >> b >> c;
}

void Solve(){
    cout << MaxNum(n) << "\n";

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