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
	ll n;
	cin >> n;
	vll a(n);
	for(auto &it:a)cin >> it;
	mll mp;
	for(auto it:a)mp[it]++;
	vll m;
	for(ll i = 1; i <= n; i++)if(!mp.count(i))m.pb(i);
	for(ll i = 0; i < n; i++){
		if(mp[a[i]] > 1 or a[i] > n){
			mp[a[i]]--;
			a[i] = m.back();
			m.pop_back();
		}
	}
	
	for(auto it:a)cout<<it<<" ";
	
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
