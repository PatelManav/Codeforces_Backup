#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    string code;
    cin >> code;
    for(ll i = 0; i < code.length(); i++){
        if(code[i] == '.'){
            cout << 0;
        }
        else if(code[i] == '-'){
            if(code[i+1] == '.'){
                cout << 1;
            }
            else if(code[i+1] == '-'){
                cout << 2;
            }
            i++;
        }
    }
}