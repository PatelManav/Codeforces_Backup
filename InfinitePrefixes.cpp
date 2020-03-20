#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
    ll T;
    cin >> T;
    while(T--){
        ll n, x, bal = 0, ans = 0;
        string str;
        cin >> n >> x;
        cin >> str;
        ll left_sum[n+1];
        left_sum[0] = 0;

        for(ll i = 0; i < n; i++){
            if(str[i] == '0')
                bal++;
            else
                bal--;
        }

        if(x == 0 and bal == 0){
            cout << -1 << endl;
        }
        else{
            for(ll i = 0; i < n; i++){
                if(str[i] == '0')
                    left_sum[i+1] = left_sum[i] + 1;
                else
                    left_sum[i+1] = left_sum[i] - 1;
            }

            

            if((x > 0 and bal < 0) or (x < 0 and bal > 0)){
                for(ll i = 1; i < n; i++){
                    if(x < 0){
                        if(arr[i] < x){
                            ans = 1;
                            break;
                        }
                    }
                }
            }
            else{
                ans++;
            }

            cout << left_0 + right_0 + 1 << endl;
        }
    }
    return 0;
}