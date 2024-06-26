#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(const int &Case)
{
	int a[3];
	cin >> a[0] >> a[1] >> a[2];
	int mn = 100;
	for(int i = 0; i < 3; ++ i)
	{
		mn = min(mn, abs(a[0] - a[i]) + abs(a[1] - a[i]) + abs(a[2] - a[i]));
	}

	cout << mn << '\n';
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