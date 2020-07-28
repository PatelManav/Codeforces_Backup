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
	cin >> n;
	ll t = 0;
	while(pow(t,10) < n)t++;
	t--;
	ll i = 0;
	for(; i <= 10; i++)
		if(pow(t+1,i)*pow(t,10-i)>=n)break;
	ll x = pow(t,10-i)*pow(t+1,i);
	if(x-n < 0)i++;
	string cf = "codeforces";
	for(ll j = 0; j < i; j++)cout<<string(t+1,cf[j]);
	for(ll j = i; j < 10; j++)cout<<string(t,cf[j]);
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
