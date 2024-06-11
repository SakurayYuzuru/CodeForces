#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int t = 0;
    getline(cin, s);
    map<char, int> mp;
    for(auto i = s.begin(); i != s.end(); ++ i)
    {
        if(*i != 'i')
        {
            mp[*i] ++;
        }
    }
    cout << mp.size() << '\n';
    
    return 0;
}