#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll FindMax(ll arr[100][100], ll row, ll col){
	vector<ll> sorted;
    for(ll i = 0; i < row; i++){
        for(ll j = 0; j < col; j++){
            sorted.push_back(arr[i][j]);
        }
    }
    sort(sorted.begin(), sorted.end());

    return sorted[sorted.size()/2];
}

int main(){
    ll n, m, d;
    cin >> n >> m >> d;
    ll arr[100][100];
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    ll maxEle = FindMax(arr, n, m);
    ll ans = 0;
    bool flag = true;

    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++){
            if((abs(maxEle - arr[i][j]))%d == 0){
                ans += (abs(maxEle - arr[i][j]))/d;
            }
            else{
                flag = false;
                break;
            }
        }
    }

    if(flag)
        cout << ans << endl;
    else
        cout << -1 << endl;

    return 0;
}