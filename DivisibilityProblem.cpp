/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll a, b;

void Input(){
    cin >> a >> b;
}

void Solve(){
    if(a%b == 0)
        cout << "0\n";
    else
        cout << (a/b+1)*b - a << "\n";
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