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
	string a,b;
	cin >> a >> b;
	sort(all(a)), sort(rall(b));
	ll u = 0, v = 0;
	ll l = 0, r = a.size()-1;
	string ans;
	ans.resize(a.size());
	for(ll i = 0; i < (ll)a.size(); i++){
		if(i%2){
			if(b[v]<=a[u])ans[r] = b[v],v++,r--;
			else ans[l] = b[v],v++,l++;
		}
		else {
			if(a[u]>=b[v])ans[r] = a[u+(a.size()-i)/2],r--;
			else ans[l]=a[u],u++,l++;
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
