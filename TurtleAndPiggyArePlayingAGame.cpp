#include<bits/stdc++.h>
using namespace std;

int dp[32];

void solve(const int &Case)
{
    int l, r;
    cin >> l >> r;
    for(int i = 0; i < 31; ++ i)
    {
        if(r < dp[i])
        {
            cout << i - 1 << '\n';
            return ;
        }
        else
            continue;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    for(int i = 0; i < 31; ++ i)
    {
        dp[i] = pow(2, i);
    }
    while(t --)
    {
        solve(1);
    }

    return 0;
}