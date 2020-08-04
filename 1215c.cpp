#include <bits/stdc++.h>
#include <stdlib.h>
#include <stdio.h>
#define f first
#define s second
#define inf 1e18
#define ll long long
#define mod 1000000007
#define pb push_back
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
	string a, b;
	cin >> a >> b;
	vll ab, ba;
	ll x = 0, y = 0;
	for(ll i = 0; i < n; i++)if(a[i]=='a')x++;
	for(ll i = 0; i < n; i++)if(b[i]=='a')x++;
	if(x%2)cout<<-1;
	else{
		for(ll i = 0; i < n; i++){
			if(a[i] == 'a' and b[i] == 'b')ab.pb(i+1);
			if(a[i] == 'b' and b[i] == 'a')ba.pb(i+1);
		}
		if((sz(ab) + sz(ba))%2)cout<<-1;
		else{
			vector<pll> ans;
			for(ll i = 1; i < sz(ab); i+=2)ans.pb({ab[i], ab[i-1]});
			for(ll i = 1; i < sz(ba); i+=2)ans.pb({ba[i], ba[i-1]});
			if(sz(ab)%2)ans.pb({ab.back(), ab.back()}), ans.pb({ab.back(), ba.back()});
			cout<<ans.size()<<endl;
			for(auto it:ans)cout<<it.f << " " << it.s << endl;
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
