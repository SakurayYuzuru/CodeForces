#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 7;
int dp[N];

int main()
{
    int n;
    cin >> n;
    dp[0] = 0;
    int mx = 0;
    for(int i = 1; i <= n; ++ i)
    {
        int a, b;
        cin >> b >> a;
        dp[i] = dp[i - 1] - b;
        dp[i] += a;
        mx = max(mx, dp[i]);
    }

    cout << mx << '\n';

    return 0;
}