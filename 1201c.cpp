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

ll n, k;
vll a;

bool check(ll mid){
	ll t = 0;
	for(ll i = n/2; i < n; i++) t += max(0ll, mid-a[i]);
	return t <= k;
}

void solve(){
	cin >> n >> k;
	a.resize(n);
	for(ll i = 0; i < n; i++)cin >> a[i];
	ll st = 0, ed = 1e10, ans = 0;
	sort(all(a));
	while(st <= ed){
		ll mid = st + (ed-st)/2;
		if(check(mid))ans = max(mid,ans), st = mid+1;
		else ed = mid-1;
	}
	cout<<ans;
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
