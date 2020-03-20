/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

string str;

char FindChar(char a, char b){
    if((a == 'a' and b == 'b') or (a == 'b' and b == 'a'))
        return 'c';
    else if((a == 'b' and b == 'c') or (a == 'c' and b == 'b'))
        return 'a';
    else if((a == 'c' and b == 'a') or (a == 'a' and b == 'c'))
        return 'b';
    else if(a == 'a' or b == 'a')
        return 'b';
    else if(a == 'b' or b == 'b')
        return 'c';
    else if(a == 'c' or b == 'c')
        return 'a';
    else{
        return 'a';
    }
}

void Input(){
    cin >> str;
}

void Solve(){

    for(ll i = 0; i < str.size(); i++){
        if(str[i] == '?'){
            char prev, next, current;

            if(i == 0)
                prev = '?';
            else
                prev = str[i-1];

            if(i == str.size()-1)
                next = '?';
            else
                next = str[i+1];
            current = FindChar(prev, next);
            str[i] = current;
        }
    }

    for(ll i = 0; i < str.size() - 1; i++){
        if(str[i] == str[i+1]){
            cout << -1 << endl;
            return;
        }
    }

    cout << str << endl;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T;
    cin >> T;
    while(T--){
        Input();
        Solve();
    }
    return 0;
}