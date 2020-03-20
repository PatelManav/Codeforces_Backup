#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll num, mn = INT_MAX, pos;
    cin >> num;

    ll arr[num];

    for(ll i = 0; i < num; i++){
        cin >> arr[i];
        if(arr[i] >= 0)
            arr[i] = - arr[i] - 1;
        if(arr[i] < mn){
            mn = arr[i];
            pos = i;
        }
    }

    if(num & 1)
        arr[pos] = - arr[pos] - 1;

    for(ll i = 0; i < num; i++){
        cout << arr[i] << endl;
    }

    return 0;
}