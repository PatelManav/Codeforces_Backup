#include <bits/stdc++.h>
#include <stdlib.h>
#include <stdio.h>
#define ll unsigned long long
#define vll vector<long long>
#define mll map<long long, long long>
#define f first
#define s second
#define pb emplace_back
#define all(a) a.begin(),a.end()
#define rall(a) a.end(),a.begin()
using namespace std;

const ll nax = 105;
vll ls[nax], in(nax);

vll ans;
void dfs(ll s){
	for(auto it:ls[s]){
		in[it]--;
		if(in[it] <= 0){
			ans.pb(it);
			dfs(it);
		}
	}
}


void solve(){
	ll n;
	cin >> n;
	vll a(n);
	for(auto &it:a)cin >> it;
	for(ll i = 0; i < n; i++){
		for(ll j = 0; j < n; j++){
			if(i==j)continue;
			if(a[i]*2 == a[j])ls[i].pb(j), in[j]++;
			if(a[i]%3 == 0 and a[i]/3 == a[j])ls[i].pb(j), in[j]++;
		}
	}
	
	for(ll i = 0; i < n; i++){
		ans.clear();
		ans.pb(i);
		dfs(i);
		if(ans.size() == n){
			for(auto it:ans)cout << a[it] << " ";
			return;
		}
	}
		
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
