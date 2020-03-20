#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll n;
vector<ll> arr;
vector<ll> ans;

void Input(){
    cin >> n;
    arr.resize(n);
    for(auto &z:arr)
        cin >> z;
}

void Solve(){
    ll num_two = 0, num_one = 0;
    for(ll i = 0; i < n; i++){
        if(arr[i] == 1){
            num_one++;
        }
        else{
            num_two++;
        }
    }

    if(num_two)
        ans.push_back(2);
    
    if(num_one)
        ans.push_back(1);
    
    num_two--;
    num_one--;

    for(ll i = 0; i < num_two; i++)
        ans.push_back(2);
    
    for(ll i = 0; i < num_one; i++)
        ans.push_back(1);

    for(ll i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
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