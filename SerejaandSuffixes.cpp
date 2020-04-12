/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N, Q;
vector<ll> arr;
map<ll, bool> mp_visited;
map<ll, ll> mp_suf;

void Input(){
    cin >> N >> Q, arr.clear(), arr.resize(N);
    for(auto &z:arr)
        cin >> z;
    mp_suf[N] = 0;
}

void Solve(){
    for(ll i = N-1; i >= 0; i--){
        if(!mp_visited.count(arr[i])){
            mp_suf[i] = mp_suf[i+1]+1;
            mp_visited[arr[i]] = true;
        }
        else{
        	mp_suf[i] = mp_suf[i+1];
        }
    }

    while(Q--){
        ll d;
        cin >> d;
        cout << mp_suf[d-1] << "\n";
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