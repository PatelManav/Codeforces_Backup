/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll n, t;
vector<ll> arr;
unordered_map<ll, ll> sum_arr;

void Input(){
    cin >> n >> t, arr.resize(n);
    for(auto &z:arr)
        cin >> z;

    sum_arr[-1] = 0;
    sum_arr[0] = arr[0];
    for(ll i = 1; i < n; i++)
        sum_arr[i] = arr[i] + sum_arr[i-1];
}

void Solve(){
    ll len = 0;

    for(ll i = 0; i < n; i++){
        ll st = i, ed = n-1, t_len = 0;
        while(st <= ed){
            ll mid = st + (ed - st)/2;
            if((sum_arr[mid] - sum_arr[i-1]) > t)
                ed = mid - 1;
            else{
                st = mid + 1;
                t_len = max(t_len, mid - i + 1);
            }
        }
        len = max(len, t_len);
    }

    cout << len << endl;

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