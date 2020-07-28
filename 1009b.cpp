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
using namespace std;

void solve(){
	string s;
	cin >> s;
	string t = "";
	for(auto it:s)if(it=='1')t+=it;
	bool f = false, g = false;
	for(ll i = 0; i < (ll)s.size(); i++){
		if(s[i] == '1')continue;
		g = true;
		if(f) cout<<s[i];
		else{
			if(s[i]=='2'){
				f = true;
				cout<<t;
			}
			cout<<s[i];
		}
	}	
	
	if(!g or !f)cout<<t;
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
