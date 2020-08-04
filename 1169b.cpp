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

ll n, m;

void input(){
	cin >> n >> m;
}

void solve(){
	vector<pll> a(m);
	for(ll i = 0; i < m; i++)cin >> a[i].f >> a[i].s;
	ll p[] = {a[0].f,a[0].s} ;
	for(ll x:p){
		ll c = 0;
		vll t(n+1);
		for(auto it:a){
			if(it.f == x or it.s == x)continue;
			c++;
			t[it.f]++,t[it.s]++;
		}
		ll mx = 0;
		for(auto it:t)mx = max(it,mx);
		if(mx == c){cout<<"YES";return;}
	}
	cout<<"NO";
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
