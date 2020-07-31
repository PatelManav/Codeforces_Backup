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

ll n, m;

void input(){
	cin >> n >> m;
}

void solve(){
	vll a(n);
	for(auto &it:a)cin>>it;
	sort(all(a));
	vll b(n,0), dp(n,0);
	b[0] = a[0];
	for(ll i = 1; i < n; i++)b[i]=b[i-1]+a[i];
	for(ll i = 0; i < m; i++)dp[i] = b[i];
	for(ll i = m; i < n; i++){
		dp[i] = dp[i-m] + b[i-m] + b[i] - b[i-m];
	}
	for(auto it:dp)cout<<it<<" ";
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
