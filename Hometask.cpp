/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N;
vector<ll> arr;

void Input(){
    cin >> N, arr.clear(), arr.resize(N);
    for(auto &z:arr)
        cin >> z;
}

void Solve(){
    ll sum = 0;
    bool isZero = false;
    for(ll i = 0; i < N; i++){
        sum += arr[i];
        if(arr[i] == 0 and isZero == false)
            isZero = true;
    }
    
    sort(arr.begin(), arr.end());

    if(isZero == false){
        cout << "-1\n";
        return;
    }

    if(sum%3 != 0){
        for(ll i = 0; i < N; i++){
            if(sum%3 == arr[i]%3){
                sum -= arr[i];
                arr[i] = -1;
                break;
            }
        }

        if(sum%3 != 0){
            ll trg = 3 - sum%3, sum_r = 0, cnt = 0;
            for(ll i = 0; i < N; i++){
                if(arr[i]%3 == trg){
                    cnt++;
                    sum_r += arr[i];
                    arr[i] = -1;
                }

                if(cnt == 2)
                    break;
            }
            sum -= sum_r;
        }
    }

    if(sum%3 != 0){
        cout << "-1\n";
        return;
    }

    ll cnt_z = 0, cnt_m = 0;

    for(ll i = 0; i < N; i++){
        if(arr[i] == 0)
            cnt_z++;
        else if(arr[i] == -1)
            cnt_m++;
    }

    if(cnt_m + cnt_z == N){
        cout << "0\n";
        return;
    }

    for(ll i = N-1; i >= 0; i--){
        if(arr[i] != -1)
            cout << arr[i];
    }
    cout << "\n";

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