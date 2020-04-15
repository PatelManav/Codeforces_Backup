/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N, M;
vector<vector<char> > arr;

vector<ll> dx = {-1, 0, +1, +1, +1, 0, -1, -1};
vector<ll> dy = {-1, -1, -1, 0, +1, +1, +1, 0};

bool Valid(ll i, ll j){
    if(arr[i][j] == '*')
        return true;
    ll num, cnt = 0;
    if(arr[i][j] == '.')
        num = 0;
    else
        num = arr[i][j] - '0';

    for(ll k = 0; k < 8; k++){
        if((i+dy[k] < 0 or i+dy[k] >= N) or (j+dx[k] < 0 or j+dx[k] >= M)) //I FKIN WROTE M AS N, WASTED AN HOUR!
            continue;
        
        if(arr[i+dy[k]][j+dx[k]] == '*')
            cnt++;
    }
    return cnt==num;
}

void Input(){
    cin >> N >> M;
    arr = vector<vector<char> >(N, vector<char>(M));
    for(ll i = 0; i < N; i++)
        for(ll j = 0; j < M; j++)
            cin >> arr[i][j];
}

void Solve(){
    for(ll i = 0; i < N; i++){
        for(ll j = 0; j < M; j++){
            if(!Valid(i, j)){
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
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