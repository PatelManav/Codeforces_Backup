    #include<bits/stdc++.h>

    #define ll long long
    #define M 1000000007 
    using namespace std;

    int main(){
        ll a, b;
        cin >> a >> b;
        cout << (((b * (b - 1) / 2) % M)*((a + ((a * (a + 1)/2) % M) * b) % M)) % M << endl;
        return 0;
    }