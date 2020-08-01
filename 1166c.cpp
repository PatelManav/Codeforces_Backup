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
	for(ll i = 0; i < n; i++)a[i] = abs(a[i]);
	sort(all(a));
	ll ans = 0;
	for(ll i = 0; i < n; i++){
		ll l = i, r = n-1, midd = i;
		while(l <= r){
			ll mid = l + (r-l)/2;
			if(a[mid] > 2*a[i])r = mid - 1;
			else if(a[mid] <= 2*a[i])midd = mid, l = mid + 1;
		}
		ans += midd - i;
	}
	cout << ans;
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
