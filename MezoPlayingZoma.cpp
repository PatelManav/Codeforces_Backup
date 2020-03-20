#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll n;
string str;

void Input(){
    cin >> n >> str;
}

void Solve(){
    ll mx = 0, mn = 0;
    for(ll i = 0; i < n; i++){
        if(str[i] == 'L'){
            mn--;
        }
        else{
            mx++;
        }
    }

    cout << mx - mn + 1 << endl;
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