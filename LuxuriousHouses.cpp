/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define endl "\n"
#define vll vector<long long>
#define pll pair<long long, long long>
#define all(c) c.begin(),c.end()
#define f first
#define s second
#define mem(a,val) memset(a,val,sizeof(a))

using namespace std;

ll N;
vll arr, arr_ans;
map<ll, ll> mp;

void Input(){
    cin >> N, arr.clear(), arr.resize(N), arr_ans.resize(N);
    for(auto &z:arr)
        cin >> z;
    for(ll i = N-1; i >= 0; i--)
    	mp[i] = max(arr[i], mp[i+1]);
}

void Solve(){
	for(ll i = 0; i < N; i++){
		arr_ans[i]= max(0ll, mp[i+1]+1-arr[i]);
	}	

	for(ll i = 0; i < N; i++){
		cout << arr_ans[i] << " ";
	}
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
    #endif

    ll T = 1;
    //cin >> T;
    while(T--){
        Input();
        Solve();
    }
    return 0;
}