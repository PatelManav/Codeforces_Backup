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
    ll Min = INT_MAX, Max = INT_MIN;

    while(N--){
        Min = INT_MAX;
        ll i = M;
        while(i--){
            ll d;
            cin >> d;
            Min = min(d, Min);
        }
        Max = max(Min, Max);
    }

    cout << Max << "\n";

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