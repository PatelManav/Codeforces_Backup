/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

string str;
map<char, ll> mp;
void Input(){
    cin >> str;
}

void Solve(){
    ll odd_cnt = 0;
    for(ll i = 0; i < str.size(); i++)
        mp[str[i]]++;
    for(auto it:mp){
        if(it.second%2 == 1)
            odd_cnt++;
    }

    if(odd_cnt){
        if(odd_cnt%2==1)
            cout << "First\n";
        else
            cout << "Second\n";
    }
    else{
        cout << "First\n";
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