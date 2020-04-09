/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N, M;
vector<vector<char> > arr;
map<pair<ll, ll>, bool> mp, mp_visited;

vector<ll> dx = {-1, 0, 1, 0};
vector<ll> dy = {0, 1, 0, -1};

ll FloodSearch(ll r, ll c){
    if(arr[r][c] == 'A'){
        ll bst = 1;
        for(ll i = 0; i < 4; i++){
            mp_visited[{r, c}] = true;
            if((r+dx[i] >= N or r+dx[i] < 0) or (c+dy[i] >= M or c+dy[i] < 0))
                continue;
            if(arr[r+dx[i]][c+dy[i]] == 'D'){
                if(mp_visited[{r+dx[i], c+dy[i]}] == true){
                    return INT_MAX;
                }

                bst = max(bst, FloodSearch(r+dx[i], c+dy[i])+1);
            }
        }
        mp_visited[{r, c}] = false;
        return bst;
    }

    char src = arr[r][c], trg;

    if(src == 'D')
        trg = 'I';
    else if(src == 'I')
        trg = 'M';
    else if(src == 'M')
        trg = 'A';
    
    ll bst = 0;

    for(ll i = 0; i < 4; i++){
        mp_visited[{r, c}] = true;
        if((r+dx[i] >= N or r+dx[i] < 0) or (c+dy[i] >= M or c+dy[i] < 0))
            continue;
        if(arr[r+dx[i]][c+dy[i]] == trg){
            bst = max(bst, FloodSearch(r+dx[i], c+dy[i]));
        }
    }
    mp_visited[{r, c}] = false;

    return bst;
}

void Input(){
    cin >> N >> M, arr.clear();
    arr = vector<vector<char > > (N, vector<char> (M));
    for(ll i = 0; i < N; i++)
        for( ll j = 0; j < M; j++)
            cin >> arr[i][j];
}

void Solve(){
    for(ll i = 0; i < N; i++)
        for( ll j = 0; j < M; j++)
            if(arr[i][j] == 'D')
                mp[{i, j}] = true;
    
    ll mx = 0;
    for(auto it:mp){
        mp_visited.clear();
        mx = max(mx, FloodSearch(it.first.first, it.first.second));
    }

    if(mx == 0){
        cout << "Poor Dima!\n";
    }
    else if(mx == INT_MAX){
        cout << "Poor Inna!\n";
    }
    else{
        cout << mx << "\n";
    }

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