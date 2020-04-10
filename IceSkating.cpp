/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N;
vector<pair<ll, ll> > arr;
map<pair<ll, ll> , bool> mp_visited;
map<pair<ll, ll>, list<pair<ll, ll > > > adj_list;

void dfs(pair<ll, ll> src){
    mp_visited[src] = true;
    for(auto it:adj_list[src]){
        if(!mp_visited[it]){
            dfs(it);
        }
    }
}

void Input(){
    cin >> N, arr.clear(), arr.resize(N);
    for(auto &z:arr)
        cin >> z.first >> z.second;
}

void Solve(){
    ll ans = 0;
    for(ll i = 0; i < N; i++){
        for(ll j = i+1; j < N; j++){
            if(arr[j].first == arr[i].first or arr[j].second == arr[i].second){
                adj_list[{arr[i].first, arr[i].second}].push_back({arr[j].first, arr[j].second});
                adj_list[{arr[j].first, arr[j].second}].push_back({arr[i].first, arr[i].second});
            }
        }
    }

    for(ll i = 0; i < N; i++){
        if(mp_visited.count({arr[i].first, arr[i].second}))
            continue;
        dfs(arr[i]);
        ans++;
    }

    cout << ans-1 << '\n';
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