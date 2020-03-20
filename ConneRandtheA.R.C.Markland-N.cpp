#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define MOD 1000000007
using namespace std;

ll n, s, k;
vector<ll> arr;

void Input(){
    cin >> n >> s >> k;
    arr.clear();
    arr.resize(k);
    for(auto &z:arr)
        cin >> z;
    
    return;
}

void Solve(){
    for(ll i = 0; i < k+1; i++){
        if(s-i >= 1 and find(arr.begin(), arr.end(), s-i) == arr.end()){
            cout << i << endl;
            return;
        }

        if(s+i <= n and find(arr.begin(), arr.end(), s+i) == arr.end()){
            cout << i << endl;
            return;
        }
    }

    return;
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