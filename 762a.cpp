#include <bits/stdc++.h>
#include <stdlib.h>
#include <stdio.h>
#define ll long long
#define vll vector<long long>
#define mll map<long long, long long>
#define f first
#define s second
#define pb emplace_back
#define all(a) a.begin(),a.end()
#define rall(a) a.end(),a.begin()
using namespace std;

void solve(){
	ll n, k;
	cin >> n >> k;
	vll a;
	for(ll i = 1; i*i <= n; i++){
		if(n%i == 0)a.pb(i);
		if(n%i == 0 and n/i != i)a.pb(n/i);
	}
	sort(all(a));
	if(k <= a.size())cout << a[k-1];
	else cout << -1;
		
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
