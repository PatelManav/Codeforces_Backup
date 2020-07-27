#include <bits/stdc++.h>
#include <stdlib.h>
#include <stdio.h>
#define ll long long
#define vll vector<long long>
#define mll map<long long, long long>
#define f first
#define s second
#define pb emplace_back
#define all(a) a.begin(),a.end()
#define rall(a) a.end(),a.begin()
using namespace std;

void solve(){
	string s,t;
	cin >> s >> t;
	ll idx = 0;
	for(ll i = 0; i < s.size(); i++){
		if(idx == t.size())break;
		if(t[idx] == s[i])idx++;
	}
	if(idx == t.size()){cout<<"automaton";return;}
	sort(all(s)),sort(all(t));
	if(s == t){cout<<"array";return;}
	idx = 0;
	for(ll i = 0; i < s.size(); i++){
		if(idx == t.size())break;
		if(t[idx] == s[i])idx++;
	}
	if(idx == t.size()){cout<<"both";return;}
	cout<<"need tree";
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
