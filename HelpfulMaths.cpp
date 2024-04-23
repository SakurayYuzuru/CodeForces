#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    vector<int> a;

    for(int i = 0; i < s.size(); ++ i)
    {
        if(isdigit(s[i]))
        {
            a.push_back(s[i] - '0');
        }
    }
    sort(a.begin(), a.end(), [](const int &x, const int &y){
        return x < y;
    });
    for(auto i = a.begin(); i != a.end(); ++ i)
    {
        if(i !=a.begin())
        {
            cout << '+';
        }
        cout << *i;
    }
    cout << '\n';

    return 0;
}