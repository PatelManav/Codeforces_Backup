/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N;
vector<pair<ll, ll> > arr;
map<ll, bool> mp_visited;

bool MC(pair<ll, ll> p1, pair<ll, ll> p2){
    return p1.second < p2.second;
}

void Input(){
    cin >> N, arr.clear(), mp_visited.clear(), arr.resize(N);
    for(ll i = 0; i < N; i++){
        ll d;
        cin >> d;
        arr[i] = {d, i};
    }
    sort(arr.begin(), arr.end());
}

void Solve(){
    ll my_rank = arr[0].first;
    for(ll i = 1; i < N; i++){
        if(arr[i].first > my_rank){
            my_rank = arr[i].first;
        }
        else{
            arr[i].first = my_rank+1;
            my_rank++;
        }
    }

    sort(arr.begin(), arr.end(), MC);

    for(ll i = 0; i < N; i++)
        cout << arr[i].first << " ";
    cout << "\n";
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