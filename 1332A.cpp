/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll a, b, c, d;
ll x, y, x1, x2, y_1, y2;

void Input(){
    cin >> a >> b >> c >> d;
    cin >> x >> y >> x1 >> y_1 >> x2 >> y2;
}

void Solve(){
    if((a+b and x1==x2) or (c+d and y_1==y2))
        cout << "No\n";
    if((x + b - a) >= x1 and (x + b - a) <= x2 and (y+ d - c) >= y_1 and (y + d - c) <= y2)
        cout << "Yes\n";
    else
        cout << "No\n";
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