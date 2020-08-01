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

ll l,r,m;

void input(){
	cin >> l >> r >> m;
}

void solve(){
	for(ll i = l; i <= r; i++){
		ll reqd = m%i;
		bool f = false;
		if(reqd < 0 or reqd > r-l)f = true;
		if(!f and i <= m){
			cout << i << " " << l + reqd << " " << l;
			break;
		}
		f = false;
		reqd = i - reqd;
		if(reqd < 0 or reqd > r-l)f = true;
		if(!f){
			cout << i << " " << r - reqd << " " << r;
			break;
		}
	}
	cout<<endl;	
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
	cin >> t;
	while(t--){
		input();
		solve();
	}
	cout << endl;
	return 0;
}
