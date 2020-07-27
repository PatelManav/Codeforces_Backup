#include <bits/stdc++.h>
#include <stdlib.h>
#include <stdio.h>
#define ll long long
#define vll vector<long long>
#define mll map<long long, long long>
#define f first
#define s second
#define pb emplace_back
#define all(a) a.begin(),a.end()
#define rall(a) a.end(),a.begin()
using namespace std;

ll n, l, r, x, ans;
vll a;

void func(ll i,ll su, ll mn, ll mx){
	if(i == n){
		if(su >= l and su <= r and mx-mn >= x)ans++;
		return;
	}
	
	func(i+1,su, mn, mx);
	mn = min(mn,a[i]);
	mx = max(mx,a[i]);
	func(i+1,su+a[i], mn, mx);
}

void solve(){
	cin >> n >> l >> r >> x;
	a.resize(n);
	for(auto &it:a)cin >> it;
	func(0,0, 1e18, 0);
	cout << ans;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.precision(20);
	ll t;
	t = 1;
	//cin >> t;
	while(t--)solve();
	cout << endl;
	return 0;
}
