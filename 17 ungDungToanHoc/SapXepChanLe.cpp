#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	long long t;
	cin >> t;
	while (t--)
	{
		long long a[100005], b[100005];
		long long n;
		cin >> n;
		for (long long i = 0; i < n; i++)
		{
			cin >> a[i];
			b[i] = a[i];
		}
		sort(b, b + n);
		long long c = n / 2;
		long long l = n - c;
		long long j = 0;
		for (long long i = 0; i < n; i += 2)
		{
			if (j <= l - 1)
			{
				a[i] = b[j];
			}
			j++;
		}
		j = n - 1;
		for (long long i = 1; i < n; i += 2)
		{
			if (j >= l)
			{
				a[i] = b[j];
			}
			j--;
		}
		for (long long i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}
}