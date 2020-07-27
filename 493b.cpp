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
	ll n, su = 0;
	cin >> n;
	vll a,b;
	bool f=true;
	while(n--){
		ll d;
		cin >> d;
		if(d>0)a.pb(d);
		else b.pb(-d);
		su +=d;
		f = (d>0);
	}
	if(su>0)cout<<"first";
	else if(su<0)cout<<"second";
	else if(a>b)cout<<"first";
	else if(b>a)cout<<"second";
	else if(f)cout<<"first";
	else cout<<"second";
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
