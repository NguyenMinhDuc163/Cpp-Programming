#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n][n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
	int m;
	cin >> m;
	int b[m][m];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> b[i][j];
		}
	}
	int cmp[n][n];
	int c = 0;
	while (c < n)
	{
		int d = 0;
		while (d < n)
		{
			for (int i = c; i < c + m; i++)
			{
				for (int j = d; j < d + m; j++)
				{
					cmp[i][j] = a[i][j] * b[i - c][j - d];
				}
			}
			d += m;
		}
		c += m;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << cmp[i][j] << " ";
		}
		cout << endl;
	}
}