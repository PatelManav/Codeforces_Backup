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
	string s;
	cin >> n >> s;
	ll x = 0, y = 0;
	for(auto it:s){
		if(it=='L')x--;
		if(it=='R')x++;
		if(it=='D')y--;
		if(it=='U')y++;
	}
	cout << n - abs(x) - abs(y);
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
