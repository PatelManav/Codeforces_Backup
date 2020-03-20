#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll a, b, n;
    string ans = "";
    bool flag = false;
    cin >> a >> b >> n;

    while(n--){
        if(flag){
            ans += '0';
        }
        else{
            for(ll i = 0; i <= 9; i++){
                if((a*10 + i)%b == 0){
                    flag = true;
                    a = a*10 + i;
                    ans = to_string(a);
                    break;
                }
            }
        }

        if(flag == false)
            break;
    }

    if(flag)
        cout << ans << endl;
    else
        cout << -1 << endl;

    return 0;
}