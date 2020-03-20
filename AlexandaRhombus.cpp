    #include<bits/stdc++.h>

    #define ll long long
    #define M 1000000007 
    using namespace std;

    int main(){
        ll n;
        cin >> n;
        ll ans = 1;
        for(ll i = 1; i < n; i++){
            ans += 4*i;
        }
        cout << ans << endl;
        return 0;
    }