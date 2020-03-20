#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll n;
char arr[50][50];

void Input(){
    cin >> n;

    for(ll i = 0; i < n; i++)
        for(ll j = 0; j < n; j++)
            cin >> arr[i][j];
}

void Solve(){
    for(ll i = 1; i < n-1; i++){
        for(ll j = 1; j < n-1; j++){
            if(arr[i][j] == '.' and arr[i-1][j] == '.' and arr[i+1][j] == '.' and arr[i][j-1] == '.' and arr[i][j+1] == '.'){
                arr[i][j] = arr[i-1][j] = arr[i+1][j] = arr[i][j-1] = arr[i][j+1] = '#';
            }
        }
    }

    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++){
            if(arr[i][j] == '.'){
                cout << "NO" << endl;
                return;
            }
        }
    }

    cout << "YES" << endl;
    return;
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