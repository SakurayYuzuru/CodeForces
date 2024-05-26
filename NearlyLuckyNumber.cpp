#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    map<char, int> mp;
    for(auto i = s.begin(); i != s.end(); ++ i)
    {
        if(*i == '4' || *i == '7')
        {
            mp[*i] ++;
            continue;
        }
    }
    int sum = mp['4'] + mp['7'];
    if(sum == 4 || sum == 7)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';

    return 0;
}