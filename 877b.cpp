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
	cin >> s;
	unordered_map<ll, ll> a, b;
	a[0] = s[0]=='a';
	b[0] = s[0]=='b';
	for(ll i = 1; i< sz(s); i++){
		a[i] = (s[i]=='a') + a[i-1];
		b[i] = (s[i]=='b') + b[i-1];
	}
	ll ans = 0;
	for(ll i = -1; i <= sz(s); i++){
		for(ll j = i;  j <= sz(s); j++){
			ll t = sz(s);
			t -= ((i==-1)?0:b[i]);
			t -= ((j <= 0)?0:a[j-1]) - ((i==-1)?0:a[i]);
			t -= b[sz(s) - 1] - ((j <= 0)? 0: b[j-1]);
			ans = max(ans,t);
		}
	}
	ll x = 0;
	for(auto it:s)if(it=='a')x++;
	if(x == sz(s))ans--;
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