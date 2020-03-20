/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N, M;

void Input(){
    cin >> N >> M;
}

void Solve(){
    ll cnt = 0;

    while(N != M){
        if(M%2 == 1){
            M++;
            cnt++;
        }else{
            M /= 2;
            cnt++;
        }
    }

    cout << cnt << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T = 1;
    //  cin >> T;
    while(T--){
        Input();
        Solve();
    }
    return 0;
}