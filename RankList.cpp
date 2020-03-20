#include<bits/stdc++.h>

#define ll long long
using namespace std;

struct mycomp{
	bool operator()(const pair <ll, ll> p1, const pair <ll, ll> p2) const{
		if(p1.first == p2.first)
        return p1.second < p2.second;
    else 
        return p1.first > p2.first;
	}
};

int main(){
    ll n, k;
    cin >> n >> k;
    map<pair <ll, ll>, ll, mycomp> mp;
    while(n--){
        ll first, second;
        cin >> first >> second;
        mp[make_pair(first, second)]++;
    }

    for(auto it:mp){
        k -= it.second;
        if(k <= 0){
            cout << it.second << endl;
            break;
        }
    }
}