/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N, curr;

void Input(){
    cin >> N;
    curr = 0;
}

void Solve(){
    for(ll i = 1; i <= N; i++){
        ll d; cin >> d;curr += d;
        if((curr - i)%2 == 1)   cout << "1\n";
        else    cout << "2\n";
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