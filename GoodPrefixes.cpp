#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(const int &Case)
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 1; i <= n; ++ i)
    {
        cin >> a[i];
    }
    
    int num = 0;
    ll pre[n];
    pre[0] = 0;
    for(int i = 1; i <= n; ++ i)
    {
        pre[i] = pre[i - 1] + a[i];
    }

    int mx = 0;
    for(int i = 1; i <= n; ++ i)
    {
        mx = max(mx, a[i]);
        if(pre[i] == 2 * mx)
        {
            num ++;
        }
    }
    cout << num << '\n';
}

int main()
{
    int t;
    cin >> t;
    while(t --)
    {
        solve(1);
    }

    return 0;
}