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
vll arr;

void Input(){
    N = 2, arr.clear(), arr.resize(N);
    for(auto &z:arr)
        cin >> z;
    sort(all(arr));
}

void Solve(){
	ll ans = 0;
	ans = arr[0];
	cout << ans << " ";
	arr[1] -= arr[0];
	ans = arr[1]/2;
	cout << ans << "\n";

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