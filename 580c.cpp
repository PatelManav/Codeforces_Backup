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
ll n, k, ans;
const ll nax = 1e5+5;
vll ls[nax], cat(nax), vis(nax,0);

void dfs(ll v, ll c){
	if(vis[v])return;
	if(ls[v].size() == 1 and vis[ls[v][0]]){
		c+=cat[v];
		c*=cat[v];
		if(c>k)return;
		ans++;
		return;
	}
	vis[v] = 1;
	c+=cat[v];
	c*=cat[v];
	if(c>k)return;
	for(auto it:ls[v]){
		dfs(it,c);
	}
}


void solve(){
	cin >> n >> k;
	for(ll i = 1; i <= n; i++)cin >> cat[i];
	for(ll i = 0; i < n-1; i++){
		ll u,v;
		cin >> u >> v;
		ls[u].pb(v);
		ls[v].pb(u);
	}
	dfs(1,0);
	cout << ans;
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
