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
ll n, k, sz;
vll a[nax], vis(nax, 0);
void dfs(ll v){
	if(vis[v])return;
	vis[v]++;
	sz++;
	for(auto it:a[v])dfs(it);
}

void input(){
	cin >> n >> k;
}

ll fe(ll b, ll p){
	b %= mod;
	ll res = 1;
	while(p > 0){
		if(p%2) res = res * b % mod;
		b = b * b % mod;
		p >>= 1;
	}
	return res;
}

void solve(){
	for(ll i = 1; i < n; i++){
		ll u, v, c;
		cin >> u >> v >> c;
		if(c == 1)continue;
		a[u].pb(v);
		a[v].pb(u);
	}
	ll ans = fe(n,k);
	for(ll i = 1; i <= n; i++){
		sz = 0;
		if(!vis[i])dfs(i);
		ans -= fe(sz,k);
		ans += mod;
		ans %= mod;
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
