/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll n, m;

void Input(){
    cin >> n >> m;
}

void Solve(){
    ll a;

    if(n == 1){
        a = 1;
    }
    else if(n%2 == 1){
        if(m > n/2)
            a = m-1;
        else
            a = m+1;
    }
    else{
        if(m <= n/2)
            a = m+1;
        else
            a = m-1;
    }

    cout << a << "\n";   
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