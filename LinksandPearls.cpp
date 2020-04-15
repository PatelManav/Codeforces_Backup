/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N;
string arr;

void Input(){
    cin >> arr;
}

void Solve(){
    ll cnt_o = 0, cnt__ = 0;

    for(ll i = 0; i < arr.size(); i++){
        if(arr[i] == '-')
            cnt__++;
        else
            cnt_o++;
    }

    if(cnt_o == 0 or cnt__%cnt_o == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
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