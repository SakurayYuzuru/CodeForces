#include <bits/stdc++.h>
using namespace std;

const int N = 5 + 7;
int a[N][N];

int main()
{
    int x, y;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= 5; j++)
        {
            cin >> a[i][j];
            if(a[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }
    }
    cout << abs(3 - x) + abs(3 - y) << '\n';

    return 0;
}