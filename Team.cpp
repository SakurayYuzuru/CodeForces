#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a;
    for(int i = 0; i < n; ++ i){
        int x, y, z;
        cin >> x >> y >> z;
        a.push_back(x + y + z);
    }

    int sum = 0;
    for(const auto &i : a){
        if(i >= 2)
            sum ++;
    }
    cout << sum << '\n';

    return 0;
}