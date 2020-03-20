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

void Solve(){
    bool isOdd = false, isEven = false;
    ll sum_of_digit = 0;

    for(ll i = 0; i < n; i++)
        sum_of_digit += arr[i];
    
    if(sum_of_digit%2 == 1){
        cout << "YES" << endl;
    }
    else{
        for(ll i = 0; i < n; i++){
            if(arr[i]%2 == 1){
                isOdd = true;
            }
            else{
                isEven = true;
            }
        }

        if(isEven and isOdd){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
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