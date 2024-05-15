#include <bits/stdc++.h>
using namespace std;

char s1[2][2] = {{'#', '#'}, {'#', '#'}},
    s2[2][2] = {{'.', '.'}, {'.', '.'}};

bool check(int x, int y)
{
    if(x == 1 || x == 2)
    {
        if(y == 1 || y == 2)
        {
            return true;
        }
    }
    else if(x == 3 || x == 0)
    {
        if(y == 3 || y == 0)
        {
            return true;
        }
    }

    return false;
}

void Solve(const int &Case)
{
    int n;
    cin >> n;
    
    for(int i = 1; i <= 2 * n; ++ i)
    {
        for(int j = 1; j <= 2 * n; ++ j)
        {
            if(check(i % 4, j % 4))
                cout << '#';
            else
                cout << '.';
        }
        cout << '\n';
    }
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