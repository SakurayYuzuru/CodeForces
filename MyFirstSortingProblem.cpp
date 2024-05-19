#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while(t --)
    {
        int x, y;
        cin >> x >> y;
        if(x >= y)
            cout << y << ' ' << x << '\n';
        else
            cout << x << ' ' << y << '\n';
    }

    return 0;
}