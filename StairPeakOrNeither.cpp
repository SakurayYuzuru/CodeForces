#include <bits/stdc++.h>
using namespace std;


void Solve(const int &Case)
{
    int a, b, c;
    cin >> a >> b >> c;
    if(a < b && b < c)
    {
        cout << "STAIR" << '\n';
        return ;
    }
    if(a < b && c < b)
    {
        cout << "PEAK" << '\n';
        return ;
    }
    cout << "NONE" << '\n';
}

int main()
{
    int t;
    cin >> t;
    while(t --)
    {
        Solve(1);
    }

    return 0;
}