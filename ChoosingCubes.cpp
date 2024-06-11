#include <bits/stdc++.h>
using namespace std;

void solve(const int &Case)
{
    int n, f, k;
    cin >> n >> f >> k;
    vector<int> a;
    for(int i = 1; i <= n; ++ i)
    {
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }

    int pos = a[f - 1];
    sort(a.begin(), a.end(), [](const int &x, const int &y)
    {
        return x > y;
    });

    int flag = 0, num = 0;
    for(int i = 0; i < n; ++ i)
    {
        if(a[i] == pos)
        {
            num ++;
            if(k > i)
                flag ++;
        }
    }

    if((flag >= num && flag) || !num)
    {
        cout << "YES" << '\n';
    }
    else if(!flag)
    {
        cout << "NO" << '\n';
    }
    else if(flag < num && flag)
    {
        cout << "MAYBE" << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while(t --)
        solve(1);

    return 0;
}