/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N;
vector<ll> arr;
vector<char> moves = {'L', 'P', 'R'};

void PrntMoves(ll p, ll l, ll r){
    cout << moves[p] << moves[l] << moves[r];
}

void Input(){
    cin >> N, arr.clear(), arr.resize(N);
    for(auto &z:arr)
        cin >> z;
}

void Solve(){
    for(ll i = 1; i <= arr[0]; i++){
        PrntMoves(1, 2, 0);
    }
    cout << moves[2];

    for(ll i = 1; i < N; i++){
        for(ll j = 1; j <= arr[i]; j++){
            PrntMoves(1, 0, 2);
        }
        if(i != N-1)
            cout << moves[2];
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