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

string s;
ll n;

void input(){
	cin >> s >> n;
}

void solve(){
	vll a(sz(s)+1, 0);
	while(n--){
		ll d;
		cin >> d;
		d--;
		a[d]++;
		a[d + (sz(s) - d - d)/2]--;
	}
	ll t = 0;
	for(ll i = 0; i < sz(s); i++){
		t += a[i];
		if(t%2)swap(s[i], s[sz(s)-1-i]);
	}
	cout<<s;
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
