#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int mn = 0, step = 5;
    while(n)
    {
        mn += n / step;
        n %= step;
        step --;
    }
    cout << mn << '\n';

    return 0;
}