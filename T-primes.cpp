    #include<bits/stdc++.h>

    #define ll long long
    using namespace std;
    ll const MAX = 10000001;

    bool primes[MAX];

    void CalcPrime(){
        memset(primes, true, sizeof(primes));

        for(ll i = 2; i*i <= MAX; i++){
            if(primes[i]){
                for(ll j = i*i; j < MAX; j += i){
                    primes[j] = false;
                }
            }
        }
    }

    bool CheckTPrime(ll num){
        return (sqrt(num) == int(sqrt(num)) and primes[int(sqrt(num))]);
    }

    int main(){
        ll T;
        cin >> T;
        CalcPrime();
        while(T--){
            ll num;
            cin >> num;
            if((num == 4) or (num != 1 and num%2 != 0 and CheckTPrime(num))){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        return 0;
    }