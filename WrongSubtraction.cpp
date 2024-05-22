#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int k;
    cin >> s >> k;

    while(k --)
    {
        if(s[s.size() - 1] != '0')
        {
            s[s.size() - 1] --;
        }
        else
        {
            s.erase(s.end() - 1);
        }
    }
    cout << s << '\n';
    
    return 0;
}