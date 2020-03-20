#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
    ll T;
    cin >> T;
    while(T--){
        ll a, b, c, n;
        cin >> a >> b >> c >> n;
        ll mx = max(a, max(b, c));
        ll diff = 3*mx - a - b - c;
        n -= diff;
        if(n < 0 or n%3 != 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl; 
    }
    return 0;
}