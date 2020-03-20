    #include<bits/stdc++.h>

    #define ll long long
    using namespace std;

    int main(){
        ll n, m;
        cin >> n >> m;
        if(n < m)
            cout << -1 << endl;
        else{
            ll i = m;
            for(i;;i+=m){
                if(i*2 >= n){
                    break;
                }
            }
            cout << i << endl;
        }
        return 0;
    }