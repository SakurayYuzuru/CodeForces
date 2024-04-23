#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    for (auto i = s1.begin(); i != s1.end(); i++)
    {
        if(*i >= 'A' && *i <= 'Z')
        {
            *i -= 'A' - 'a';
        }
    }
    for (auto i = s2.begin(); i != s2.end(); i++)
    {
        if(*i >= 'A' && *i <= 'Z')
        {
            *i -= 'A' - 'a';
        }
    }

    if(s1 == s2)
        cout << 0 << '\n';
    else if(s1 > s2)
        cout << 1 << '\n';
    else
        cout << -1 << '\n';

    return 0;
}