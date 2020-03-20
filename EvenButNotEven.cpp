#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll n;
string str_n;

void Input(){
    cin >> n;
    cin >> str_n;
}

bool Solve(){

    ll sum_of_digit = 0;

    for(ll i = 0; i < str_n.size(); i++){
        sum_of_digit += str_n[i] - '0';
    }

    if(sum_of_digit%2 == 0){
        if(((str_n[n - 1] - '0')%2 != 0)){  
            return true;
        }
        else{
            for(ll i = str_n.size()-1; i >= 0; i--){
                if((str_n[i] - '0')%2 != 0){
                    str_n = str_n.substr(0, i+1);
                    return true;
                }
            }

            return false;
        }
    }
    else if(sum_of_digit%2 != 0 and str_n.size() > 1){
        ll removed = 0;
        for(ll i = str_n.size() -1; i >= 0; i--){
            if((str_n[i] - '0')%2 != 0 and removed%2 != 0){
                str_n = str_n.substr(0, i+1);
                return true;
            }
            removed += str_n[i] - '0';
        }
    }

    return false;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T;
    cin >> T;
    while(T--){
        Input();
        if(!Solve())
            cout << -1 << endl;
        else
            cout << str_n << endl;
    }
    return 0;
}