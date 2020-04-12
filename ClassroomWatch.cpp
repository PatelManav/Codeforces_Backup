/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N;
vector<ll> arr;

ll SOD(ll n){
    ll sum = 0;
    while(n > 0){
        sum += n%10;
        n /= 10;
    }
    return sum;
}

void Input(){
    cin >> N;
}

void Solve(){
    for(ll i = 0; i <= 100; i++){
        if(SOD(N-i) == i)
            arr.push_back(N-i);
    }
    sort(arr.begin(), arr.end());

    if(arr.size() == 0)
        cout << "0\n";
    else{
        cout << arr.size() << "\n";
        for(ll i = 0; i < arr.size(); i++)
            cout << arr[i] << " ";
        cout << "\n";
    }

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