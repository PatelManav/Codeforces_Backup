#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
    int n, a[1000], b[1000], c[1001] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d%d", &a[i], &b[i]);
        c[b[i]] += 1;
    }
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        c[b[i]] -= 1;
        if (c[a[i]] == 0)
        {
            count += 1;
        }
        c[b[i]] += 1;
    }
    printf("%d\n", count);
    return 0;
}