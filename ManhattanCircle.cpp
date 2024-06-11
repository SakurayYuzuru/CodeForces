#include <bits/stdc++.h>
using namespace std;

void solve(const int &Case)
{
    int n, m;
    cin >> n >> m;
    char mp[n + 7][m + 7];
    bool pos[n + 7][m + 7];
    vector<int> col(n + 7), rol(m + 7);
    memset(pos, false, sizeof(pos));

    for(int i = 1; i <= n; ++ i)
    {
        for(int j = 1; j <= m; ++ j)
        {
            cin >> mp[i][j];
            if(mp[i][j] == '#')
            {
                col[i] ++;
                rol[j] ++;
                pos[i][j] = true;
            }
        }
    }

    pair<int, int> t, l;
    for(int i = 1; i <= n; ++ i)
    {
        if(col[i] == 1)
        {
            for(int j = 1; j <= m; ++ j)
            {
                if(pos[i][j])
                {
                    t = make_pair(i, j);
                }
            }
        }
    }

    for(int j = 1; j <= m; ++ j)
    {
        if(rol[j] == 1)
        {
            for(int i = 1; i <= n; ++ i)
            {
                if(pos[i][j])
                {
                    l = make_pair(i, j);
                }
            }
        }
    }

    cout << l.first << ' ' << t.second << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t --)
    {
        solve(1);
    }

    return 0;
}