#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

pair<ll, ll> prices;
ll diff = 0;
string str = "";

void Input(){
    cin >> prices.first >> prices.second;
}

void Solve(){
    if(diff + prices.first < 500){
        str += 'A';
        diff += prices.first;
    }
    else{
        str += 'G';
        diff -= prices.second;
    }
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

    if(diff > 500){
        cout << -1 << endl;
    }
    else{
        cout << str << endl;
    }
    return 0;
}