#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    map<char, int> mp;
    getline(cin, s);
    for(auto i = s.begin(); i!= s.end(); ++ i)
    {
        mp[*i] ++;
    }
    if(mp.size() % 2)
        cout << "IGNORE HIM!" << '\n';
    else
        cout << "CHAT WITH HER!" << '\n';

    return 0;
}