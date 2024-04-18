#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x;
    vector<string> s;

    for(int i = 1; i <= n; ++ i){
        string tmp;
        cin >> tmp;
        s.push_back(tmp);
    }
    for(const auto &str : s){
        for(const auto &ch : str){
            if(ch == 'X'){
                continue;
            }
            if(ch == '+'){
                x += 1;
                break;
            }
            if(ch == '-'){
                x -= 1;
                break;
            }
        }
    }
    cout << x << '\n';

    return 0;
}