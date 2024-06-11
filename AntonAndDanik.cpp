#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<char, int> mp;
    for(int i = 0; i < n; ++ i)
    {
        char ch;
        cin >> ch;
        mp[ch] ++;
    }

    if(mp['A'] > mp['D'])
        cout << "Anton" << '\n';
    else if(mp['A'] < mp['D'])
        cout << "Danik" << '\n';
    else
        cout << "Friendship" << '\n';

    return 0;
}