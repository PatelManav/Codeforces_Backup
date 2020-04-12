/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N;
vector<string> arr;
map<ll, list<ll> > mp;

bool Contains(list<ll> a, list<ll> b){//b in a
    bool is;
    for(auto it:b){
        is = false;
        for(auto jt:a)
            if(jt == it)
                is = true;
        if(!is)
            return false;
    }

    return true;
}

void Input(){
    cin >> N, arr.clear(), arr.resize(N+1);
    fill(arr.begin(), arr.end(), "YES");
}

void Solve(){
    for(ll i = 1; i <= N; i++){
        ll d;
        cin >> d;
        while(d--){
            ll v;
            cin >> v;
            mp[i].push_back(v);
        }
    }

    for(auto it:mp){
        for(auto jt:mp){
            if(it.first != jt.first and Contains(it.second, jt.second))
                arr[it.first] = "NO";
        }
    }

    for(ll i = 1; i <= N; i++)
        cout << arr[i] << "\n";
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