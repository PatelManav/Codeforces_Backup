/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

string recipe;
vector<ll> n, p;
map<char, ll> mp;
ll r;

ll Value(ll x){
    ll money;
    ll b_reqd = max(0ll, mp['B']*x - n[0]), c_reqd = max(0ll, mp['C']*x - n[2]), s_reqd = max(0ll, mp['S']*x - n[1]);
    money += b_reqd*p[0] + c_reqd*p[2] + s_reqd*p[1];
    return money;
}

void Input(){
    cin >> recipe;
    for(ll i = 1; i <= 3; i++){
        ll d;
        cin >> d;
        n.push_back(d);
    }
    for(ll i = 1; i <= 3; i++){
        ll d;
        cin >> d;
        p.push_back(d);
    }
    for(ll i = 0; i < recipe.size(); i++){
        mp[recipe[i]]++;
    }
    cin >> r;
}

void Solve(){
    ll st = 0, ed = 1000000000000 + r;
    ll ans = 0;
    while(st <= ed){
        ll mid = st + (ed - st)/2;
        
        if(Value(mid) > r){
            ed = mid - 1;
        }
        else{
            st = mid + 1;
            ans = max(ans, mid);
        }
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