/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll N, K, M, sum = 0;
vector<ll> arr;

void Input(){
    cin >> N >> K >> M, arr.clear(), arr.resize(K);
    for(auto &z:arr){
        cin >> z;
        sum += z;
    }
    sort(arr.begin(), arr.end());
}

void Solve(){
    int ans = 0;

    for(int task_completed = 0; task_completed <= N; ++task_completed) {
        int minutes_spent = sum * task_completed;
        if(minutes_spent > M) break;

        int point = task_completed + task_completed * K;
        int minutes_rem = M - minutes_spent;

        for(int i = 0; i < K; ++i) {
            int now_take = arr[i] * (N - task_completed);

            if(now_take <= minutes_rem) {
                minutes_rem -= now_take;
                point += (N - task_completed);
            }
            else {
                point += minutes_rem / arr[i];
                break;
            }
        }

        ans = max(ans, point);
    }

    cout << ans;
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