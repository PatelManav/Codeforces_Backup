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
#define sz(x) ((double)(x).size())
#define mll map<long long, long long>
#define pll pair<long long, long long>
using namespace std;
const ll nax = 1e5+5;
ll n;
vll a[nax];

void input(){
	cin >> n;
}

long double dfs(ll v, ll p = -1){
	long double s = 0;
	for(auto it:a[v]){
		if(p != it) s += dfs(it,v) + 1;
	}
	return s ? s / (a[v].size() - (p != -1)) : 0;
}

void solve(){
	for(ll i = 1; i < n; i++){
		ll u , v;
		cin >> u >> v;
		a[u].pb(v);
		a[v].pb(u);
	}
	cout << dfs(1);
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
