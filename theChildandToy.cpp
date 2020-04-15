/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N, M; 
vector<pair<ll, ll > > arr;
map<ll, list<ll> > mp;
map<ll, ll> mp_val;

bool MC(pair<ll, ll> p1, pair<ll, ll> p2){
    return p1.first > p2.first;
}

void Input(){
    cin >> N >> M, arr.clear(), arr.resize(N);
    ll i = 1;
    for(auto &z:arr){
        cin >> z.first;
        z.second = i;
        mp_val[i] = z.first;
        i++;
    }
    for(ll i = 0; i < M; i++){
        ll u, v;
        cin >> u >> v;
        mp[u].push_back(v);
        mp[v].push_back(u);
    }
    sort(arr.begin(), arr.end(), MC);
}

void Solve(){
    ll ans = 0;
    for(ll i = 0; i < N; i++){
        for(auto it:mp[arr[i].second]){
            ans += mp_val[it];
        }
        mp_val[arr[i].second] = 0;
    }

    cout << ans << "\n";

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