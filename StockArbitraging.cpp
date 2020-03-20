#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll n, m, bourle;
vector<ll> morn;
vector<ll> eve;

void Input(){
    cin >> n >> m >> bourle;
    morn.resize(n);
    eve.resize(m);
    for(auto &z:morn)
        cin >> z;
    
    for(auto &z:eve)
        cin >> z;
}

void Solve(){
    ll mn_morn = INT_MAX, mx_eve = INT_MIN;
    ll stock = 0;

    for(ll i = 0; i < n; i++)
        mn_morn = min(morn[i], mn_morn);

    for(ll i = 0; i < m; i++)
        mx_eve = max(eve[i], mx_eve);

    if(mn_morn >= mx_eve){
        cout << bourle << endl;
    }
    else{
        stock = bourle/mn_morn;
        bourle = bourle%mn_morn;
        bourle += stock*mx_eve;
        cout << bourle << endl;
    }

    return;

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