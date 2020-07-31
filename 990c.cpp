#include <bits/stdc++.h>
#include <stdlib.h>
#include <stdio.h>
#define ll long long
#define ull unsigned long long
#define vll vector<long long>
#define mll map<long long, long long>
#define pll pair<long long, long long>
#define f first
#define s second
#define pb emplace_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define inf 1e18
using namespace std;

void solve(){
	ll n;
	cin >> n;
	mll mp;
	while(n--){
		string s;
		cin >> s;
		ll x = 0;
		stack<char> st;
		for(auto it:s){
			if(st.empty())st.push(it);
			else if(it == ')' and st.top() == '(')st.pop();
			else st.push(it);
			if(it=='(')x++;
			else x--;
		}
		if(!x and !st.empty())continue;
		if(!x)mp[x]++;
		else if(x > 0){
			bool f = false;
			while(!st.empty())f |= st.top()==')',st.pop();
			if(!f)mp[x]++;
		} 
		else if(x < 0){
			bool f = false;
			while(!st.empty())f |= st.top()=='(',st.pop();
			if(!f)mp[x]++;
		}
	}
	ll ans =0;
	for(auto it:mp){
		if(it.f < 0)continue;
		if(!it.f)ans += it.s+ it.s*(it.s-1);
		else ans += it.s*mp[-it.f];
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
