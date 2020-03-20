    #include<bits/stdc++.h>

    #define ll long long
    using namespace std;
    unordered_map<ll, float> bank;

    void FindDst(string input, ll dst){
        if(input.length() == 0){
            bank[dst]++;
            return;
        }

        if(input[0] == '+'){
            FindDst(input.substr(1), dst+1);
        }
        else if(input[0] == '-'){
            FindDst(input.substr(1), dst-1);
        }
        else{
            FindDst(input.substr(1), dst+1);
            FindDst(input.substr(1), dst-1);
        }
    }

    int main(){
        string input_drazil, input_deamoon;
        ll output_drazil = 0;
        cin >> input_drazil >> input_deamoon;

        for(ll i = 0; i < input_drazil.length(); i++){
            if(input_drazil[i] == '+')
                output_drazil++;
            else
                output_drazil--; 
        }

        FindDst(input_deamoon, 0);
        float size = 0;
        
        for(auto it:bank)
        	size += it.second;
        
        float ans = bank[output_drazil]/size;

        printf("%.10f", ans);
        return 0;
    }