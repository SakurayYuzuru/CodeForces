#include <bits/stdc++.h>
using namespace std;

void Solve(const int &Case)
{
    string t;
    bool vis = false;
    cin >> t;
    int h = (t[0] - '0') * 10 + t[1] - '0';
    if(h > 12)
    {
        h -= 12;
        t[0] = h / 10 + '0';
        t[1] = h % 10 + '0';
        vis = true; 
    }
    if(h == 0)
    {
        t[0] = '1', t[1] = '2';
    }
    if(h == 12)
    {
        vis = true;
    }

    if(vis)
    {
        cout << t << ' ' << "PM" << '\n';
    }
    else
    {
        cout << t << ' ' << "AM" << '\n';
    }
}

int main()
{
    int n;
    cin >> n;
    while(n --)
    {
        Solve(1);
    }

    return 0;
}