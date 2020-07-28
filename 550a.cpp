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
	string s;
	cin >> s;
	vll a,b;
	for(ll i = 0; i < (ll)s.size()-1; i++)if(s[i]=='A' and s[i+1]=='B')a.pb(i);
	for(ll i = 0; i < (ll)s.size()-1; i++)if(s[i]=='B' and s[i+1]=='A')b.pb(i);
	if(a.size() and b.size() and (abs(a[0] - b.back()) > 1 or abs(b[0] - a.back()) > 1))cout<<"YES";
	else cout<<"NO";
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
