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
	vll a(n);
	for (ll i = 0; i < n; i++) cin >> a[i];
	sort(all(a));
	cout << a[n - 1];
	ll z = -1;
	for (ll i = 0; i < n - 1; i++)if (a[n - 1] % a[i])z = a[i];
	if (z == -1) {
		for (ll i = n - 1; i >= 1; i--) {
			if (a[i] == a[i - 1]) {z = a[i]; break;}
		}
	}
	cout << " " << z;
		
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
