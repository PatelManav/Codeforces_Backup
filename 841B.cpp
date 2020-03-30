/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N;


void Input(){
    cin >> N;
}

void Solve(){
    while(N--){
        ll d;
        cin >> d;
        if(d%2 == 1){
            cout << "First\n";
            return;
        }
    }

    cout << "Second\n";
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