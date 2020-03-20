#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll a, b, c;
vector<ll> arr;

ll S(ll x){
    ll ans = 0;
    while(x){
        ans += x%10;
        x /= 10;
    }

    return ans;
}

void Input(){
    cin >> a >> b >> c;
}

void Solve(){
    ll x;
    for(ll s = 1; s <= 81; s++){
        x = b*pow(s, a) + c;
        if(x < 1000000000 and S(x) == s){
            arr.push_back(x);
        }
    }

    cout << arr.size() << endl;
    for(auto it:arr)
        cout << it << " ";
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