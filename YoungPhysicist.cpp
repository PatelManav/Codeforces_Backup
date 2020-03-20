#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll T, x, y, z;
    ll sum_x = 0, sum_y = 0, sum_z = 0;
    cin >> T;
    vector<pair<ll, pair<ll, ll> > > v;
    while(T--){
        cin >> x >> y >> z;
        v.push_back(make_pair(x, make_pair(y, z)));
    }
    for(auto it:v){
        sum_x += (it).first;
        sum_y += (it).second.first;
        sum_z += (it).second.second;
    }

    if(!sum_x && !sum_y && !sum_z){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl; 
    }
}