#include <bits/stdc++.h>
using namespace std;

void solve(const int &Case)
{
    int mx = 0, pos = 2;
    int n;
    cin >> n;
    for(int i = 2; i <= n; ++ i)
    {
        int sum = 0;
        for(int j = 1; i * j <= n; ++ j)
        {
            sum += i* j;
        }
        if(sum >= mx)
        {
            mx = sum;
            pos = i;
        }
    }
    cout << pos << '\n';
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