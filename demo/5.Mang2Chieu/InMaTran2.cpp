#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int m, k = 1;
		cin >> m;
		int n = 4 * m;
		int a[n + 1][n + 1];
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= n; j++)
				a[i][j] = k++;
		k = 0;
		int b[1000];
		int l = 1, r = n - 1, top = 1, bot = n;
		while (l < r)
		{
			for (int i = top; i <= bot; i++)
				b[k++] = a[i][l];
			for (int i = l + 1; i <= r; i++)
				b[k++] = a[bot][i];
			top++;
			bot--;
			l += 2;
			for (int i = bot; i >= top; i--)
				b[k++] = a[i][r];
			if (l != r)
				for (int i = r - 1; i >= l; i--)
					b[k++] = a[top][i];
			r -= 2;
			bot--;
			top++;
		}
		for (int i = k - 1; i >= 0; i--)
			cout << n * n + 1 - b[i] << " ";
		cout << endl;
		for (int i = k - 1; i >= 0; i--)
			cout << b[i] << " ";
		cout << endl;
	}
}