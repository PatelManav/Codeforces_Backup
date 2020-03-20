#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll n;
vector<ll> arr;

void Input(){
    cin >> n;
    arr.clear();
    arr.resize(n);
    for(auto &z:arr)
        cin >> z;
}

bool Solve(){

    ll st = -1, ed = n;

    for(ll i = 0; i < n; i++){
        if(arr[i] < i){
            break;
        }
        st = i;
    }

    for(ll i = n-1; i >= 0; i--){
        if(arr[i] < ((n-1) - i)){
            break;
        }
        ed = i;
    }

    if(st >= ed)
        return true;
    else
        return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T;
    cin >> T;
    while(T--){
        Input();
        if(!Solve())
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}