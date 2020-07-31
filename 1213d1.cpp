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

ll n, k;

void input(){
	cin >> n >> k;
}

void solve(){
	vll a(n);
	for(auto &it:a)cin>>it;
	ll nax = 2e5;
	map<pll,ll>mp;
	for(ll i = 0; i < n; i++){
		ll t = 0;
		while(a[i] > 0){
			mp[{i,a[i]}] = t;
			a[i]/=2;
			t++;
		}
		mp[{i,a[i]}] = t;
	}
	ll ans = inf;
	for(ll i = nax; i >= 0; i--){
		vll t;
		for(ll j = 0; j < n; j++){
			if(!mp.count({j,i}))continue;
			t.pb(mp[{j,i}]);
		}
		if(sz(t)<k)continue;
		sort(all(t));
		ll tans = 0;
		for(ll i = 0; i < k; i++)tans+=t[i];
		ans = min(ans,tans);
		if(!i)break;
	}
	cout<<ans;
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
