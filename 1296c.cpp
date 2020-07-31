#include <bits/stdc++.h>
#include <stdlib.h>
#include <stdio.h>
#define ll long long
#define ull unsigned long long
#define vll vector<long long>
#define pll pair<long long, long long>
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
	string s;
	cin >> s;
	ll x = 0, y = 0;
	map<pll, ll> mp;
	mp[{0,0}] = 0;
	ll ans = inf, l, r;
	for(ll i = 1; i <= n; i++){
		if(s[i-1]=='L')x--;
		if(s[i-1]=='R')x++;
		if(s[i-1]=='U')y++;
		if(s[i-1]=='D')y--;
		if(mp.count({x,y})){
			if(ans > i - mp[{x,y}])l = mp[{x,y}], r = i;
			ans = min(ans, i - mp[{x,y}]);
			mp[{x,y}] = i;
		}
		else mp[{x,y}] = i;
	}
	
	if(ans==inf)cout<<-1;
	else cout<<l+1 << " "<< r;
	cout<<endl;
	
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.precision(20);
	ll t;
	t = 1;
	cin >> t;
	while(t--)solve();
	cout << endl;
	return 0;
}
