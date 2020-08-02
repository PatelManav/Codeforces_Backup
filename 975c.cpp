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

ll n, q;

void input(){
	cin >> n >> q;
}

void solve(){
	vll a(n), k(q);
	for(auto &it:a)cin>>it;
	for(auto &it:k)cin>>it;
	vll b(n,0);
	b[0] = a[0];
	for(ll i = 1; i < n; i++)b[i] = a[i]+b[i-1];
	auto pt = 0;
	ll t = 0;
	for(auto it:k){
		ll l = pt, r = n-1, midd = -1;
		ll x = t+it;
		while(l <= r){
			ll mid = l + (r-l)/2;
			if(b[mid] > x)r = mid - 1;
			else  midd = mid, l = mid + 1;
		}
		t+=it;
		if(midd == -1){
			cout << n-pt << endl;
		}
		else if(midd == n-1){
			pt = 0, t = 0;
			cout << n << endl;
		}
		else{
			pt = midd+1;
			cout << n-1-midd << endl;
		}
	}
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
