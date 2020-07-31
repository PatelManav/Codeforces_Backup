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

ll n,a,b,k;

void input(){
	cin >> n >> a >> b >> k;

}

void solve(){
	vll r(n);
	for(auto &it:r)cin>>it;
	for(ll i = 0; i < n; i++)r[i]%=(a+b);
	for(ll i = 0; i < n; i++){
		if(!r[i]){
			r[i]+=b;
			r[i] = ((r[i]+a-1)/a);
		}
		else r[i] = ((r[i]+a-1)/a)-1;
	}
	sort(all(r));
	ll ans = 0;
	for(ll i = 0; i < n; i++){
		if(r[i]<=k)ans++;
		k -= min(k,r[i]);
	}
	cout<<ans;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
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
