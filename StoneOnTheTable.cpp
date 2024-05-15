#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s, cpy;
    cin >> n >> s;

    int mn = 0;

    do
    {
        cpy = s;
        for(auto i = s.begin(); i != s.end(); ++ i)
        {
            if(i == s.end())
            {
                if(*i == *(s.begin()))
                {
                    s.erase(i);
                    mn ++;
                }
            }
            if(*i == *(i + 1))
            {
                s.erase(i);
                mn ++;
            }
        }
    }while(s != cpy);
    

    cout << mn << '\n';

    return 0;
}