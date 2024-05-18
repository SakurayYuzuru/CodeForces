#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int k, n, w;
    cin >> k >> n >> w;

    int sum = 0;
    for(int i = 1; i <= w; ++ i)
    {
        sum += i * k;
    }
    if(sum <= n)
        cout << 0 << '\n';
    else
        cout << sum - n << '\n';

    return 0;
}