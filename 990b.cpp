#include <bits/stdc++.h>
#include <stdlib.h>
#include <stdio.h>
#define ll long long
#define ull unsigned long long
#define vll vector<long long>
#define mll map<long long, long long>
#define pll pair<long long, long long>
#define f first
#define s second
#define pb emplace_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define inf 1e18
using namespace std;

void solve(){
	ll n, k;
	cin >> n >> k;
	vll a(n);
	for(auto &it:a)cin >> it;
	sort(all(a));
	ll ans = 0;
	ll i = 0;
	while(i < n){
		auto it = upper_bound(all(a),a[i]);
		if(it != a.end() and (*it)-a[i] <= k)i = it - a.begin();
		else{
			ans++;
			i++;
		}
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
