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

const ll nax = 2e5+100;

vll ls[nax], vis(nax, 0);

void dfs(ll v){
	if(vis[v])return;
	vis[v] = 1;
	for(auto it:ls[v]){
		if(!vis[it])dfs(it);
	}
}

void solve(){
	ll n;
	cin >> n;
	for(ll i = 0; i < n; i++){
		string s;
		cin >> s;
		for(auto it:s)ls[n + it -'a'].pb(i), ls[i].pb(n+it-'a');
	}
	
	ll ans = 0;
	for(ll i = n; i < n+26; i++){
		if(!ls[i].empty() and !vis[i]){
			ans++;
			dfs(i);
		}
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
