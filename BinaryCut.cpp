#include <bits/stdc++.h>
using namespace std;

void solve(const int &Case)
{
    string s;
    int ans = 1;
    cin >> s;
    stack<char> st;

    for(auto i = s.begin(); i != s.end(); ++ i)
    {
        if(st.empty())
            st.push(*i);
        
        if(*i == '0')
        {
            if(st.top() == '0')
            {
                st.push(*i);
            }
            else
            {
                while(st.size())
                {
                    st.pop();
                }
                ans ++;
                st.push(*i);
            }
        }
        else
        {
            st.push(*i);
        }
    }
    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve(1);
    }

    return 0;
}