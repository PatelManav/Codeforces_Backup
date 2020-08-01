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

ll n, m;
const ll nax = 1e5+5;
vll ls[nax], vis(nax,0), ans;
	
void input(){
	cin >> n >> m;
}

void solve(){
	for(ll i = 0; i < m; i++){
		ll u,v;
		cin >> u >> v;
		ls[u].pb(v), ls[v].pb(u);
	}
	for(ll i = 1; i <= n; i++)if(ls[i].size())sort(all(ls[i]));
	set<ll> s;
	s.insert(1);
	vis[1] = 1;
	while(!s.empty()){
		ll v = (*(s.begin()));
		s.erase(s.begin());
		cout<<v<<" ";
		for(auto it:ls[v]){
			if(!vis[it]){
				vis[it] = 1;
				s.insert(it);
			}
		}
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
