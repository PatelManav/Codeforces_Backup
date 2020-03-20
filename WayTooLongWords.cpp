#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll T;
    cin >> T;
    while(T--){
        string str;
        cin >> str;
        if(str.length() <= 10){
            cout << str << endl;
        }
        else{
            cout << str[0] << str.length() - 2 << str[str.length() - 1] << endl;
        }
    }
}