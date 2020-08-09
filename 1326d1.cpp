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

string s;

void input(){
	cin >> s;
}

void solve(){
	string ans = "";
	for(ll i = 0; i < sz(s); i++){
		for(ll j = sz(s) - 1; j >= 0; j--){
			if(i >= j)continue;
			string t = "";
			for(ll k = 0; k <= i; k++)t+=s[k];
			for(ll k = j; k < sz(s); k++)t+=s[k];
			string u = t;
			reverse(all(t));
			if(u == t and sz(ans) < sz(u))ans = u;
		}
	}
	cout<<ans<<endl;
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
	return 0;
}
