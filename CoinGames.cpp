#include <bits/stdc++.h>
using namespace std;

void solve(const int &Case)
{
    bool status = false;
    int t;
    string s;
    cin >> t >> s;
    vector<int> v;
    map<int, int> mp;

    for(auto i = s.begin(); i != s.end(); ++ i)
    {
        if(*i == 'U')
        {
            v.push_back(0);
            mp[0] ++;
        }
        else if(*i == 'D')
        {
            v.push_back(1);
        }
    }

    while(mp[0] && !v.empty() && t --)
    {
        for(auto i = v.begin(); i != v.end(); ++ i)
        {
            if(v.size() == 1)
            {
                if(!*i)
                {
                    v.erase(i);
                    status = !status;
                    break;
                }
            }

            if(v.size() == 2)
            {
                if(!*i)
                {
                    v.erase(i);
                    mp[0] --;
                    status = !status;
                    break;
                }
                else
                    continue;
            }

            if(!*i)
            {
                status = !status;
                if(i == v.begin())
                {
                    *(i + 1) = abs(*(i + 1) - 1);
                    v[v.size() - 1] = abs(v[v.size() - 1] - 1);
                }
                else if(i == v.end() - 1)
                {
                    *(i - 1) = abs(*(i - 1) - 1);
                    v[0] = abs(v[0] - 1);
                }
                else
                {
                    *(i - 1) = abs(*(i - 1) - 1);
                    *(i + 1) = abs(*(i + 1) - 1);
                }

                v.erase(i);
                break;
            }
        }

        mp[0] = 0;

        for(const auto &i : v)
        {
            mp[i] ++;
        }
    }

    if(status)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    int n;
    cin >> n;
    while(n --)
        solve(1);

    return 0;
}