// Problem : B. ZgukistringZ
// Contest : Codeforces - Codeforces Round #307 (Div. 2)
// URL : https://codeforces.com/problemset/problem/551/B
// Memory Limit : 0 MB
// Time Limit : 0 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define endl '\n'
using namespace std;

string a, b, c;
map<char, ll> mp_a, mp_b, mp_c;

void Input(){
    cin >> a >> b >> c;
    for(ll i = 0; i < a.size(); i++)
        mp_a[a[i]]++;
    for(ll i = 0; i < b.size(); i++)
        mp_b[b[i]]++;
    for(ll i = 0; i < c.size(); i++)
        mp_c[c[i]]++;
}

void Solve(){
    ll cnt_b = INT_MAX, cnt_c = INT_MAX;
    string osf;
    for(auto it:mp_b){
        cnt_b = min(cnt_b, mp_a[it.first]/it.second);
    }
    for(auto it:mp_a){
        mp_a[it.first] -= cnt_b*mp_b[it.first];
    }
    for(ll i = 0; i < cnt_b; i++)
        osf += b;
    for(auto it:mp_c){
        cnt_c = min(cnt_c, mp_a[it.first]/it.second);
    }
    for(auto it:mp_a){
        mp_a[it.first] -= cnt_c*mp_c[it.first];
    }
    for(ll i = 0; i < cnt_c; i++)
        osf += c;
        
    for(auto it:mp_a){
        while(mp_a[it.first]--) 
            osf += it.first;
    }

    cout << osf << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ll T = 1;
    //cin >> T;
    while(T--){
        Input();
        Solve();
    }
    return 0;
}