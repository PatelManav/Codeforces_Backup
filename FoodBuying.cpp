#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll s;

ll CntDgt(ll s){
    ll ans = 0;
    while(s > 0){
        ans++;
        s/=10;
    }
    return ans;
}

void Input(){
    cin >> s;
}

void Solve(){
    ll ans = 0, digits;

    while(s >= 10){
        digits = CntDgt(s);
        ans += pow(10, digits - 1);
        s = s - pow(10, digits - 1);
        s += pow(10, digits - 1)/10;
    }
    ans += s;
    cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T;
    cin >> T;
    while(T--){
        Input();
        Solve();
    }
    return 0;
}