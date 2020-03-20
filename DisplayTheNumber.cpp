#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
    ll T, n;
    cin >> T;
    while(T--){
        string ans = "";
        ll pos = 9;
        cin >> n;
        if(n%2 != 0){
            cout << "7";
            for (int i = 0; i < (n - 3) / 2; i++) 
                cout << "1"; 
        }
        else{
            for (int i = 0; i < n / 2; i++) 
                cout << "1"; 
        }
        cout << endl;
    }
    return 0;
}