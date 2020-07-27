#include <bits/stdc++.h>
#include <stdlib.h>
#include <stdio.h>
#define ll long long
#define ull unsigned long long
#define vll vector<long long>
#define mll map<long long, long long>
#define f first
#define s second
#define pb emplace_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define inf 1e18
ll mod = 1e9 + 7;
using namespace std;

void solve(){
	string s;
	cin >> s;
	ll ans = 0, cnt = 0;
	ll n = s.size();
	for(ll i = n-1; i >= 0; i--){
		if(s[i]=='b')cnt++;
		else ans+=cnt,cnt*=2,ans%=mod,cnt%=mod;
	}
	cout<<ans; 
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.precision(20);
	ll t;
	t = 1;
	//cin >> t;
	while(t--)solve();
	cout << endl;
	return 0;
}
