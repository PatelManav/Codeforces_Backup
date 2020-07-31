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

ll n;

void input(){
	cin >> n;
}

void solve(){
	vll a;
	ll p = -1;
	while(n>0){
		a.pb(n%3);
		if(n%3 == 2)p=sz(a)-1;
		n/=3;
	}
	a.pb(0);
	if(p!=-1){
		auto it = find(a.begin()+p, a.end(), 0);
		ll z = it - a.begin();
		a[z] = 1;
		for(ll i = z-1; i >= 0; i--)a[i]=0;
	}
	ll ans = 0, pw = 1;
	for(ll i = 0; i < sz(a); i++){
		ans += pw*a[i];
		pw*=3;
	}
	cout<<ans<<endl;

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
	cout << endl;
	return 0;
}
