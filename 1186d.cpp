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
	vector<long double> a(n);
	for(auto &it:a)cin >> it;
	vll b(n);
	for(ll i = 0; i < n; i++){
		b[i] = a[i];
		ll x = a[i];
		if((long double)x == a[i])continue;
		if(a[i]<0)b[i]--;
	}

	ll t = 0;
	for(auto it:b)t+=it;
	if(t != 0){
		for(ll i = 0; i < n; i++){
			ll x = a[i];
			if((long double)x == a[i])continue;
			b[i]++;
			t++;
			if(t == 0)break;
		}
	}

	for(auto it:b)cout<<it<<" ";
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
