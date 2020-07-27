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
	ll i = 0;
	vll ans;
	ll n = s.size();
	while(i < n){
		if(i+2 >= n)break;
		string t = "";
		t+=s[i],t+=s[i+1],t+=s[i+2];
		if(t=="one")ans.pb(i+2),i+=3;
		else if(t=="two"){
			if(i+4>=n)ans.pb(i+2),i+=3;
			else{
				t+=s[i+3],t+=s[i+4];
				if(t=="twone")ans.pb(i+3),i+=5;
				else ans.pb(i+2),i+=3;
			}
		}
		else i++;
	}
	
	cout<<ans.size()<<endl;
	for(auto it:ans)cout<<it<<" ";
	cout<<endl;
	
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.precision(20);
	ll t;
	t = 1;
	cin >> t;
	while(t--)solve();
	cout << endl;
	return 0;
}
