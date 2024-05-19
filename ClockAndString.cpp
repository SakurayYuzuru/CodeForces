#include <bits/stdc++.h>
using namespace std;

void solve(const int &Case)
{
    int xa, ya, xb, yb;
    cin >> xa >> ya >> xb >> yb;
    vector<int> a;
    for(int i = min(xa, ya); i <= max(xa, ya); ++ i)
    {
        a.push_back(i);
    }
    int flag = 0;
    for(const auto &i : a)
    {
        if(xb == i || yb == i)
        {
            flag ++;
        }
    }
    if(!flag || flag == 2)
        cout << "NO" << '\n';
    else
        cout << "YES" << '\n';
}

int main()
{
    int t;
    cin >> t;
    while(t --)
        solve(1);

    return 0;
}