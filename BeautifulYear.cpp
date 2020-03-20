#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool CheckYear(ll y){
    ll a = y / 1000;
    ll b = y / 100 % 10;
    ll c = y / 10 % 10;
    ll d = y % 10;
    if (a != b && a != c && a != d && b != c && b != d && c != d)
    {
        return true;
    }

    return false;
}

int main(){
    ll year, ans;
    cin >> year;
    ll i = year + 1;
    while(1){
        if(CheckYear(i))
            break;
        i++;
    }

    cout << i << endl;
}