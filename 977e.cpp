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

const ll nax = 2e5+5;
ll n, m, src;
vll a[nax], vis(nax,0);
bool f;

void input(){
	cin >> n >> m;
}

void dfs(ll v){
	if(vis[v]){
		if(v == src)f&=true; 
		return;
	}
	vis[v] = 1;
	if(sz(a[v]) != 2)f = false;
	for(auto it:a[v]){
		dfs(it);
	}
}

void solve(){
	for(ll i = 0; i < m; i++){
		ll u, v;
		cin >> u >> v;
		a[v].pb(u);
		a[u].pb(v);
	}
	ll ans = 0;
	for(ll i = 1; i <= n; i++){
		f = true;
		src = i;
		if(!vis[i])dfs(i), ans += f;
	}
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
