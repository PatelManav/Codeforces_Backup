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
	vll a(n);
	for(auto &it:a)cin>>it;
	vll c(101,0);
	for(auto &it:a)c[it]++;
	string ans = string(n,'x');
	ll t = 0;
	bool f = true;
	for(ll i = 0; i < n; i++){
		if(c[a[i]] == 1){
			if(f)ans[i]='A';
			else ans[i]='B';
			f=!f;
			t++;
		}
	}
	if(t%2 == 0){
		cout<<"YES\n";
		for(auto it:ans){if(it=='x')cout<<'A';else cout<<it;}
	}
	else{
		f = false;
		for(ll i = 0; i< n; i++){
			if(c[a[i]] > 2){
				f = true;
				ans[i]='B';
				break;
			}
		}
		if(f){
			cout<<"YES\n";
			for(auto it:ans){if(it=='x')cout<<'A';else cout<<it;}
		}
		else cout<<"NO\n";
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
