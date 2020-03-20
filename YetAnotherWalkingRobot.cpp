#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll n;
vector<char> arr;
map<pair<ll, ll>, vector<ll> > point;

void Input(){
    cin >> n;
    arr.clear();
    arr.resize(n);
    idx.clear();
    for(auto &z:arr)
        cin >> z;
}

void Solve(){
    ll x = 0, y = 0, dst = INT_MAX;
    ll ans_l, ans_r;
     
    for(ll i = 0; i < n; i++){

        if(arr[i] == 'L'){
            x--;
        }
        else if(arr[i] == 'R'){
            x++;
        }
        else if(arr[i] == 'U'){
            y++;
        }
        else if(arr[i] == 'D'){
            y--;
        }
        idx[make_pair(x,y)].push_back(i);
    }

    for(auto it:idx){
        if(it.second.size() > 1){
            for(ll i = 0; i < idx.second.size() - 1; i++){
                if(dst < (idx.second[i+1] - idx.second[i] + 1)){
                    ans_r = idx.second[i+1];
                    ans_l = idx.second[i];
                    dst = idx.second[i+1] - idx.second[i] + 1;
                }
            }
        }
    }

    if(dst != INT_MAX)
        cout << ans_l << " " << ans_r << endl;
    else
        cout << -1 << endl;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T;
    cin >> T;
    while(T--){
        Input();
        Solve();
    }
    return 0;
}