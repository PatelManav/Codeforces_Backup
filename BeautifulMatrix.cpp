#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll mat[5][5], x, y;
    for(ll i = 0; i < 5; i++)
        for(ll j = 0; j < 5; j++)
            cin >> mat[i][j];
    
    for(ll i = 0; i < 5; i++)
        for(ll j = 0; j < 5; j++)
            if(mat[i][j]){
                x = i;
                y = j;
            }
    
    cout << abs(x-2)+abs(y-2) << endl;
}