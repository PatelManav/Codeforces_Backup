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

void solve(){
	ll n, ans = 0;
	cin >> n;
	vll a(n), vis(n,0);
	for(auto &it:a)cin >> it;
	sort(all(a));
	for(ll i = 0; i < n; i++){
		if(vis[i]) continue;
		vis[i] = 1;
		ll curr = 1;
		ans++;
		for(ll j = 0; j < n; j++){
			if(vis[j])continue;
			if(curr > a[j])continue;
			curr++;
			vis[j] = 1;
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
