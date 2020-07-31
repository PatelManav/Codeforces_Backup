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
}

void solve(){
	string s;
	cin >> s;
	vll a[26];
	for(ll i = 0; i < sz(s); i++)a[s[i]-'a'].pb(i);
	ll ans = 0;
	for(auto it:a)ans = max(ans,sz(it));

	for(ll i = 0; i < 26; i++){
		if(a[i].empty())continue;

		for(ll j = 0; j < 26; j++){
			if(a[j].empty())continue;
			ll t = 0;
			for(ll k = 0; k < sz(a[i]); k++){
				auto jt = upper_bound(all(a[j]), a[i][k]);
				ll z = a[j].end()-jt;
				t += z;
			}
			ans = max(ans,t);
		}
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
