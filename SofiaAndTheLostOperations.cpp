#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(const int &Case)
{
    int n;
    cin >> n;
    vector<int> a, b, d;
    for(int i = 0; i < n; ++ i)
    {
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }
    for(int i = 0; i < n; ++ i)
    {
        int tmp;
        cin >> tmp;
        b.push_back(tmp);
    }
    int m;
    cin >> m;
    for(int i = 0; i < m; ++ i)
    {
        int tmp;
        cin >> tmp;
        d.push_back(tmp);
    }

    map<int, pair<int, int>> mp;
    for(int i = 0; i < n; ++ i)
    {
        if(a[i] != b[i])
        {
            mp.insert(make_pair(i, make_pair(a[i], b[i])));
        }
    }
    if(mp.size() > m)
    {
        cout << "NO" << '\n';
        return ;
    }

    for(auto &pair : mp)
    {
        for(const auto &i : d)
        {
            if(pair.second.second == i)
            {
                mp.erase(pair.first);
                break;
            }
        }
    }
    
    if(mp.size())
    {
        cout << "NO" << '\n';
    }
    else
    {
        cout << "YES" << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while(t --)
        solve(1);

    return 0;
}