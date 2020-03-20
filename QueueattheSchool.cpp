#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll size, t;
    string str;
    cin >> size >> t;
    cin >> str;
    while(t--){
        for(ll i = 0; i < size; i++){
        	if(str[i] == 'G' && str[i-1] == 'B'){
        		str[i-1] = 'G';
        		str[i] = 'B';
        		i++;
        	}
        }
    }
    cout << str << endl;
}