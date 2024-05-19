#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s;
    getline(cin, s);
    int lower = 0, upper = 0;

    for(const auto &ch : s)
    {
        if(islower(ch))
            lower ++;
        if(isupper(ch))
            upper ++;
    }

    if(lower >= upper)
    {
        for(auto i = s.begin(); i != s.end(); ++ i)
        {
            if(isupper(*i))
            {
                *i = tolower(*i);
            }
        }
    }
    else
    {
        for(auto i = s.begin(); i != s.end(); ++ i)
        {
            *i = toupper(*i);
        }
    }
    cout << s << '\n';

    return 0;
}