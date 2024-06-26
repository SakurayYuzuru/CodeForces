#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(const int &Case)
{
	int n, m;
	cin >> n >> m;
	string s;
	cin >> s;
	vector<int> ind(m);
	vector<char> c(m);
	for(int i = 0; i < m; ++ i)
	{
		cin >> ind[i];
	}
	for(int i = 0; i < m; ++ i)
	{
		cin >> c[i];
	}
	sort(ind.begin(), ind.end());
	sort(c.begin(), c.end());

	map<int, int> count;
	for(int i = 0; i < m; ++ i)
		count[ind[i]] ++;
	int pos = 0;
	for(const auto &pair : count)
	{
		s[pair.first - 1] = c[pos ++];
	}
	cout << s << '\n';
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int t;
	cin >> t;
	while(t --)
	{
		solve(1);
	}

	return 0;
}