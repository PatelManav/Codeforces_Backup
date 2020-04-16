/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N;
vector<ll> arr;
string s, t;

void Input(){
    cin >> N >> s >> t;
}

void Solve(){

    for(ll i = 0; i < N; i++){
        if(s[i] == t[i])
            continue;
        
        ll j;
        for(j = i+1; j < N; j++)
            if(s[j] == t[i])
                break;
        
        if(j == N){
            cout << "-1\n";
            return;
        }

        for(ll k = j; k > i; k--){
            swap(s[k], s[k-1]);
            arr.push_back(k);
        }
    }

    cout << arr.size() << "\n";

    for(ll i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";

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