#include <bits/stdc++.h>
using namespace std;

void solve(const int &Case)
{
    string s;
    cin >> s;
    map<char, int> mp;
    for(const auto &ch : s)
        mp[ch] ++;
    if(mp.size() == 1)
    {
        cout << "NO" << '\n';
        return ;
    }

    next_permutation(s.begin(), s.end());
    cout << "YES" << '\n';
    cout << s << '\n';

    return ;
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