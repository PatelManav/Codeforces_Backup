/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll n, count = 0;
map<ll, ll> bank;

void MakeLucky(){
    if(count == 2048){
        return;
    }
}

void Input(){
    cin >> n;
}

void Solve(){
    bool ans = IsSuperLucky(n);

    while(!ans){
        n++;
        ans = IsSuperLucky(n);
    }

    cout << n << endl;
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