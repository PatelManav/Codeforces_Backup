/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll in, out;
string arr;

void Input(){
    cin >> arr;
}

void Solve(){
    in = out = 0;
    for(ll i = 0; i < arr.size(); i++){
        if(arr[i] == '+'){
            if(out != 0){
                out--;
            }
            in++;
        }
        else{
            if(in != 0){
                in--;
            }
            out++;
        }
    }

    cout << in + out << "\n";
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