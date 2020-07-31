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
	ll t = n*(k-1)/k;
	while(1){
		ll ans = 0, T = t;
		while(T){
			ans+=T;
			T/=k;
		}
		if(ans >= n){cout<<t;return;}
		t++;
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
