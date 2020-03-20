/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll v1_x, v1_y, v2_x, v2_y;

void Input(){
    cin >> v1_x >> v1_y >> v2_x >> v2_y;
}

void Solve(){
    if(v1_x == v2_x){
        cout << v1_x + v2_y - v1_y << " " << v1_y << " " << v2_x + v2_y - v1_y << " " <<v2_y;
    }
    else if(v1_y == v2_y){
        cout << v1_x << " " << v1_y + v1_x - v2_x << " " << v2_x << " " << v2_y + v1_x - v2_x;
    }
    else if(abs(v1_x - v2_x) == abs(v1_y - v2_y)){
        cout << v1_x << " " << v2_y << " " << v2_x << " " << v1_y;
    }
    else{
        cout << -1;
    }
    cout << endl;
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