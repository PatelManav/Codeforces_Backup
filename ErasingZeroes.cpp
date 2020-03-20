/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

string str;

void Input(){
    cin >> str;
}

void Solve(){
    ll left_ptr = -1, right_ptr = -1;
    ll ans = 0;
    bool is_right_now = false;
    for(ll i = 0; i < str.size(); i++){
        if(str[i] == '1'){
            left_ptr = i;
            if(!is_right_now and right_ptr != -1){
                ans += abs(right_ptr - left_ptr);
            }
            is_right_now = true;
        }
        else if(str[i] == '0' and is_right_now){
            right_ptr = i;
            is_right_now = false;
        }
    }

    cout << ans << endl;
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