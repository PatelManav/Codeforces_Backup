
// Problem : D. Walking Between Houses
// Contest : Codeforces - Codeforces Round #501 (Div. 3)
// URL : https://codeforces.com/problemset/problem/1015/D
// Memory Limit : 256 MB
// Time Limit : 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define endl '\n'
using namespace std;

ll n, k, s;
vector<ll> arr;

void Input(){
    cin >> n >> k >> s;
}

void Solve(){
    ll x, cur = 1;
    if(k>s or k*(n-1) < s){
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    while(k){
        x = min(n-1, s-(k-1));
        cur = ((cur+x > n)? cur-x:cur+x); 
        cout << cur << " ";
        k--, s -= x;
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