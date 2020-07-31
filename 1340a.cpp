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
	mll mp;
	for(auto &it:a)cin>>it;
	for(ll i = 0; i < n; i++)mp[a[i]]=i;
	ll t = 1;
	vll b(n,-1);
	while(t <= n){
		ll idx = mp[t];
		if(b[idx] != -1){cout<<"No\n";return;}
		b[idx]=t;
		idx++;
		while(idx < n and b[idx]==-1){t++,b[idx]=t,idx++;}
		t++;
	}
	if(b==a)cout<<"Yes\n";
	else cout<<"No\n";12
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
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
