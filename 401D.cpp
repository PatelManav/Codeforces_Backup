#include <bits/stdc++.h>
// !-------------PBDS-----------------!
// #include <ext/pb_ds/tree_policy.hpp>
// #include <ext/pb_ds/assoc_container.hpp>
// using namespace __gnu_pbds;
// typedef tree<ll,null_type,std::greater_equal<ll>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
// !-------------PBDS-----------------! remember about greater/_equal<ll>, less/_equal<ll>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;

#define IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pcont(x)    for(auto i: x){cout << i << " ";} cout << "\n";
#define all(x)      (x).begin(), (x).end()
#define rall(x)     (x).rbegin(), (x).rend()
#define debug(x)    cerr << "[" << #x << ": " << x << "]" << endl;
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1) { cerr << name << " : " << arg1 << '\n'; }
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args) {
    const char* comma = strchr(names + 1, ',');
    cerr.write(names, comma - names) << " = " << arg1 << " | "; __f(comma + 1, args...);
}
void solve() {
    ll n, m, k;
    string s;
    ll ans = 0;

    cin >> s >> m;
    n = s.size();
    vector<vector<ll>> dp(1 << n, vector<ll>(m, 0));
    vector<ll> present_digit(10, 0);
    ll cur_no = 0, base = 1;
    reverse(all(s));
    for (int i = 0; i < n; i++)
    {
        ll d = s[i] - '0';
        present_digit[d] |= (1 << i);
    }
    for (ll mask = 1; mask < (1 << n); mask++)
    {
        if (__builtin_popcountll(mask) == 1) {
            ll index = __builtin_ctzll(mask);
            if (s[index] > '0') {
                ll d = (s[index] - '0') % m;
                dp[mask][d] = 1;
            }
        }
        else {

            for (ll digit = 0; digit < 10; digit++) {
                //trace(digit & mask, digit, mask);
                if ((present_digit[digit] & mask) == 0) continue;
                ll index = __builtin_ctzll(present_digit[digit] & mask);
                for (ll j = 0; j < m; j++)
                {
                    ll next = (j * 10 + digit) % m;
                    dp[mask][next] += dp[mask ^ (1 << index)][j];
                }
            }

        }
    }

    cout << dp[(1 << n) - 1][0] << " ";
}
int main() {
    IOS;
    ll tc;
    //cin >> tc;
    tc = 1;
    while (tc--) {
        solve();
    }
    return 0;
}
