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
	vll a(4);
	a[0] = 6, a[1] = 10, a[2] = 14, a[3] = n-30;
	if(a[3]<=0)cout<<"NO\n";
	else{
		cout<<"YES\n";
		if(a[3] == a[0]) a[0]=6,a[1]=5,a[2]=10,a[3]=15;
		else if(a[3] == a[1])a[3]=15,a[1]=5;
		else if(a[3] == a[2])a[2]=21,a[3]=7;
		for(auto it:a)cout<<it<<" ";
			cout<<endl;
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
	cin >> t;
	while(t--){
		input();
		solve();
	}
	cout << endl;
	return 0;
}
