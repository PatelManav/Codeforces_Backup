#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll SquareNum(ll n, ll a){
    ll ans = n/a;
    if(n%a != 0)
        ans++;
    return ans;

}

int main(){
    ll n, m, a;
    ll ans = 0;
    cin >> n >> m >> a;
    ll inc = SquareNum(n, a);
    for(ll i = 0; i < m; i+=a){
        ans += inc;
    }
    cout << ans;
    cin >> a;
}