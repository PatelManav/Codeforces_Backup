#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll n, taste;
vector<ll> arr;

void Input(){
    cin >> n;
    arr.clear();
    arr.resize(n);
    for(auto &z:arr){
        cin >> z;
    }
}

bool Solve(){
    taste = 0;

    for(auto it:arr){
        taste += it;
        if(taste <= 0){
            return false;
        }
    }

    taste = 0;

    for(ll i = n-1; i >= 0; i--){
        taste += arr[i];
        if(taste <= 0)
            return false;
    }

    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T;
    cin >> T;
    while(T--){
        Input();
        if(Solve())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}