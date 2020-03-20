#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
    ll x, y, n;
    cin >> x >> y >> n;
    ll arr[] = {x, y, y - x, -x, -y, x - y};
    cout << (arr[(n - 1) % 6] % MOD + MOD) % MOD;
    return 0;
}