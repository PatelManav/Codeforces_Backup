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
	map<string, ll>mp;
	vector<pair<string, ll> > v(n);
	for(ll i = 0; i < n; i++){
		string s;
		cin >> s;
		ll d;
		cin >> d;
		mp[s]+=d;
		v[i] = {s,d};
	}
	ll sc = 0, pos = inf;
	for(auto it:mp)sc = max(sc,it.s);
	vector<string> w;
	for(auto it:mp)if(it.s==sc)w.pb(it.f);
	string ans = "z";
	for(auto it:w){
		ll idx = inf;
		ll m = 0;
		for(ll j = 0; j < n; j++){
			pair<string,ll> jt = v[j];
			if(jt.f == it)m+=jt.s;
			if(jt.f == it and m >= sc)idx = min(idx,j);
		}
		if(idx<pos)pos=idx,ans=it;
	}
	cout<<ans;
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
