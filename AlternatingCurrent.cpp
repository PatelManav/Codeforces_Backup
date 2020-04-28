/*May The Force Be With Me*/
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define endl "\n"
#define vll vector<long long>
#define pll pair<long long, long long>
#define all(c) c.begin(),c.end()
#define f first
#define s second
#define inf INT_MAX
#define size_1d 10000000
#define size_2d 10000
#define mem(a,val) memset(a,val,sizeof(a))
//Snippets: bigint, bsearch, graph, splitstring, segtree, delta

using namespace std;

string str;
stack<char> stk;

void Input() {
	cin >> str;
}

void Solve() {
	for (ll i = 0; i < str.size(); i++) {
		if (stk.empty()) {
			stk.push(str[i]);
			continue;
		}

		if (stk.top() == str[i]) {
			stk.pop();
			continue;
		}

		stk.push(str[i]);
	}

	if (!stk.empty())
		cout << "No";
	else
		cout << "Yes";
	cout << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	ll T = 1;
	//cin >> T;
	//ll t = 1;
	while (T--) {
		Input();
		//cout << "Case " << t << ": ";
		Solve();
		//t++;
	}
	return 0;
}