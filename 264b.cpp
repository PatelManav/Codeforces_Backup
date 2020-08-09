#include <bits/stdc++.h>
#include <stdlib.h>
#include <stdio.h>
#define f first
#define s second
#define inf 1e18
#define ll long long
#define mod 1000000007
#define pb emplace_back
#define vll vector<long long>
#define ull unsigned long long
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define sz(x) ((long long)(x).size())
#define mll map<long long, long long>
#define pll pair<long long, long long>
using namespace std;

ll n;

void input(){
	cin >> n;
}

void solve(){
	vll a(n);
	for(auto &it:a)cin>>it;
	vll d(100005, 0), dp(n, 1);
	for(ll i = 0; i < n; i++){
		ll ans = 0;
		for(ll j = 1; j*j <= a[i]; j++){
			if(a[i]%j == 0){
				if(j != 1)ans = max(ans, d[j]);
				ans = max(ans, d[a[i]/j]);
			}
		}
		dp[i] = max(dp[i], ans+1);
		for(ll j = 1; j*j <= a[i]; j++){
			if(a[i]%j == 0){
				if(j != 1)d[j] = max(dp[i], d[j]);
				d[a[i]/j] = max(dp[i], d[a[i]/j]);
			}
		}
	}
	ll res = 0;
	for(auto it:dp) res = max(res, it);
	cout<<res;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	cout.precision(20);
	ll t;
	t = 1;
	//cin >> t;
	while(t--){
		input();
		solve();
	}
	cout << endl;
	return 0;
}
