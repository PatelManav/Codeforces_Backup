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

ll n, s;

void input(){
	cin >> n >> s;
}

void solve(){
	vll a(n);
	for(auto &it:a)cin>>it;
	ll l = 0, r = n, midd = 0, cost = 0;
	while(l <= r){
		ll mid = l + (r-l)/2;
		vll c;
		for(ll i = 0; i < n; i++)c.pb(a[i]+(i+1)*mid);
		sort(all(c));
		ll ans = 0;
		for(ll i = 0; i < mid; i++)ans+=c[i];
		if(ans <= s){
			midd = mid, cost = ans;
			l = mid+1;
		}
		else r = mid-1;
	}
	cout<<midd << " " << cost;
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
