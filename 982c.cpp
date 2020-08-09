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
ll n;
vll a[nax], vis(nax,0), cnt(nax,0);

void input(){
	cin >> n;
}

void dfs(ll v){
	if(vis[v])return;
	vis[v] = 1;
	cnt[v] = 1;
	for(auto it:a[v]){
		if(!vis[it]){
			dfs(it);
			cnt[v]+=cnt[it];
		}
	}
}

void solve(){
	for(ll i = 0; i < n-1; i++){
		ll u, v;
		cin >> u >> v;
		a[v].pb(u);
		a[u].pb(v);
	}
	if(n%2) cout<<-1;
	else if(n <= 3) cout << 0;
	else{
		dfs(1);
		ll ans = 0;
		for(ll i = 1; i <= n; i++){
			if(cnt[i] != n and 	cnt[i]%2 == 0)ans++;
		}
		cout<<ans;
	}
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
