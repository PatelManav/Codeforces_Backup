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
#define rall(a) a.end(),a.begin()
using namespace std;

void solve(){
	ll n;
	cin >> n;
	vll a(n);
	ll su  = 0, x = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		su += a[i];
		x ^= a[i];
	}
	
	cout << 2 << endl << x << " " << (su+x)<<endl;
	
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
