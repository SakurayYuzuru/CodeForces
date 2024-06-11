#include <bits/stdc++.h>
using namespace std;

void solve(const int &Case)
{
    int n, m;
    string s;
    cin >> n >> m >> s;

    map<char, int> mp;
    mp.insert(make_pair('A', 0));
    mp.insert(make_pair('B', 0));
    mp.insert(make_pair('C', 0));
    mp.insert(make_pair('D', 0));
    mp.insert(make_pair('E', 0));
    mp.insert(make_pair('F', 0));
    mp.insert(make_pair('G', 0));

    for(int i = 0; i < n; ++ i)
    {
        mp[s[i]] ++;
    }

    int ans = 0;
    while(m --)
    {
        for(auto &pair : mp)
        {
            if(!pair.second)
            {
                ans ++;
                continue;
            }
            pair.second --;
        }
    }
    cout << ans << '\n';
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