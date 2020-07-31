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

const ll nax = 1e5+5;
bool f = true;
ll n, m;
vll ls[nax], p(nax), h(nax), a(nax), g(nax);

void input(){
	cin >> n >> m;
}

void dfs(ll v, ll an = -1){
	a[v] = p[v];
	ll s = 0;
	for(auto it:ls[v]){
		if(it == an)continue;
		dfs(it,v);
		s += g[it];
		a[v] += a[it];
	}
	g[v] = (a[v]+h[v])/2;
	if((a[v]+h[v])%2 != 0)f = false;
	if(g[v] < 0 or g[v] > a[v])f = false;
	if(s > g[v])f = false;
}

void solve(){
	for(ll i = 0; i < n; i++)cin >> p[i];
	for(ll i = 0; i < n; i++)cin >> h[i];
	for(ll i = 0; i < n-1; i++){
		ll u, v;
		cin >> u >> v;
		u--,v--;
		ls[u].pb(v);
		ls[v].pb(u);
	}
	dfs(0);
	if(f)cout<<"YES\n";
	else cout<<"NO\n";
	f=true;
	for(ll i = 0; i < nax; i++)ls[i].clear();
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
	cin >> t;
	while(t--){
		input();
		solve();
	}
	return 0;
}
