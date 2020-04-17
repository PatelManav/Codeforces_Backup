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

ll N, K;
vll arr;

bool MC(ll a, ll b){
	return (a - (a/10)*10) > (b - (b/10)*10);
}

void Input(){
    cin >> N >> K, arr.clear(), arr.resize(N);
    for(auto &z:arr)
        cin >> z;
    sort(all(arr), MC);
}

void Solve(){
	ll curr, ans = 0, x = 0;
	for(ll i = 0; i < N; i++){
		curr = 10 - arr[i]%10;
		if(curr <= K){
			K -= curr;
			arr[i] += curr;
		}
		else{
			break;
		}
	}

	for(ll i = 0; i < N; i++){
		ans += arr[i]/10;
		x += (100-arr[i]);
	}

	ans += (min(x, K)/10);

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