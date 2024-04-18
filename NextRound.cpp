#include <bits/stdc++.h>
using namespace std;

vector<int> a;
int main(){
    int n, k;
    cin >> n >> k;
    for(int i = 1; i <= n; ++ i){
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }
    int sum = 0, score = a[k - 1];
    
    for(auto i = a.begin(); i != a.end(); ++ i){
        if(!*i)
            continue;
        if(*i >= score){
            sum ++;
        }
    }
    cout << sum << '\n';

    return 0;
}