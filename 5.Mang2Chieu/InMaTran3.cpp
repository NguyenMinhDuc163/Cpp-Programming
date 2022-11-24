#include <bits/stdc++.h>
using namespace std;
#define ll long long int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		map<int, vector<int>> mp;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				int tmp;
				cin >> tmp;
				if ((i + j) % 2 == 0)
				{
					mp[i + j].insert(mp[i + j].begin(), tmp);
				}
				else
				{
					mp[i + j].push_back(tmp);
				}
			}
		}
		for (auto x : mp)
		{
			for (auto a : x.second)
			{
				cout << a << " ";
			}
		}
		cout << endl;
	}
	return 0;
}