#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int ans = INT_MAX;
	for(int i = 1; i*i <= n; i++){
		if(n%i==0){
			ans = min(ans, 2*i + 2*(n/i));
		}
	}
	cout<<ans;
	return 0;
}