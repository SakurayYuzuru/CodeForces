#include <bits/stdc++.h>
using namespace std;

void solve(const int &Case)
{
    vector<int> v;
    int a, b, c;
    cin >> a >> b >> c;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    int times = 0;

    int sum = 0;
    for(const auto &i : v)
    {
        sum += i;
    }
    if(sum % 2)
    {
        cout << -1 << '\n';
        return ;
    }
    if((!v[0] && !v[1]) || (!v[1] && !v[2]) || (!v[0] && !v[2]))
    {
        cout << 0 << '\n';
        return ;
    }
    
    for(auto i = v.begin(); i != v.end(); ++ i)
    {
        if(!*i)
        {
            v.erase(i);
        }
    }

    while(v.size() != 1 && v.size())
    {
        sort(v.begin(), v.end());
        auto p = v.begin();
        if(!v[0])
        {
            v.erase(v.begin());
        }
        else if(!*(p+ 1))
        {
            v.erase(p + 1);
        }
        else if(!v[v.size() - 1])
        {
            v.erase(v.end() - 1);
        }
        v[0] --;
        v[v.size() - 1] --;
        times ++;
    }
    cout << times - 1 << '\n';
}

int main()
{
    int t;
    cin >> t;
    while(t --)
    {
        solve(1);
    }

    return 0;
}