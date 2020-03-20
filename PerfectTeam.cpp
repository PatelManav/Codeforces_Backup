#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll c, m, x;
ll ans;

void Input(){
    cin >> c >> m >> x;
    ans = 0;
}

void Solve(){
    ans += min(c, min(m, x));
    c -= ans; m -= ans;

    ans += min((c+m)/3, min(c, m));
    
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