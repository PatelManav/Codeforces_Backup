/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
#define endl '\n'

ll N, M;
vector<vector<char> > arr;
map<ll, bool> isBest;

void Input(){
    cin >> N >> M, arr.clear(), isBest.clear();
    arr = vector<vector<char> > (N, vector<char> (M));

    for (ll i = 0 ; i < N; i++)
        for(ll j = 0; j < M; j++)
            cin >> arr[i][j];
}

void Solve(){
    ll cnt = 0;

    for(ll j = 0; j < M; j++){
        vector<ll> tmp; char mx = '0';
        for(ll i = 0; i < N; i++){
            if(arr[i][j] > mx){
                tmp.clear();
                tmp.push_back(i);
                mx = arr[i][j];
            }
            else if(arr[i][j] == mx){
                tmp.push_back(i);
            }
        }
        for(ll i = 0; i < tmp.size(); i++){
            if(!isBest.count(tmp[i])){
                cnt++;
                isBest[tmp[i]] = true;
            }
        }
    }

    cout << cnt << endl;
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