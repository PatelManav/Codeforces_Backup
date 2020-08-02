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
	ll m = n/2;
	if(k < m or (n < 2 and k) or (!k and n > 2))cout << -1;
	else{
		ll t = 1;
		k -= (m-1);
		for(ll i = 0; i < m-1; i++){
			while(t == k or t+1 == k or t == 2*k or t+1 == 2*k)t+=2;
			cout << t << " " << t+1 << " ";
			t+=2;
		}
		if(n == 1)cout << 1;
		else{ 
			cout << k << " " << 2*k << " ";
			if(n%2)	cout << 1e9;
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
