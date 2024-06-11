#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    int d;
    cin >> t;
    while(t --)
    {
        cin >> n;
        d = floor(n / 12);
        cout << d << '\n';
    }

    return 0;
}