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
	vll a(n), b(n);
	multiset<ll> s;
	for(auto &it:a)cin >> it;
	for(auto &it:b)cin >> it;
	for(auto it:b)s.insert(it);
	for(auto it:a){
		auto jt = s.lower_bound(n-it);
		if(jt == s.end())jt=s.begin();
		cout<<(it+*jt)%n<<" ";
		s.erase(jt);
	}
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
