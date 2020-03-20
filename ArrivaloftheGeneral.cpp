    #include <bits/stdc++.h>
    #define ll long long
    #define MOD 1000000007
    using namespace std;

    ll n;
    vector<ll> arr;

    void Input(){
        cin >> n;
        arr.resize(n);
        for(auto &z:arr)
            cin >> z;
    }

    void Solve(){
        ll ans = 0, mx_ptr, mn_ptr, mx = INT_MIN, mn = INT_MAX;
        for(ll i = 0; i < n; i++){
            if(arr[i] > mx){
                mx = arr[i];
                mx_ptr = i;
            }

            if(arr[i] <= mn){
                mn = arr[i];
                mn_ptr = i;
            }
        }

        ans = mx_ptr + (n - mn_ptr - 1) - (mx_ptr > mn_ptr);

        cout << ans << endl;
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