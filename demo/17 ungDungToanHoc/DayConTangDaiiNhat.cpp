#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
#define ll long long
int main()
{
	//faster();
	int t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		ll a[n + 1], sum[n + 1] = {0};
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
		}
		sum[1] = a[1];
		sum[2] = max(a[1], a[2]);
		for (int i = 3; i <= n; i++)
		{
			sum[i] = max(sum[i - 1], a[i] + sum[i - 2]);
		}
		cout << sum[n] << endl;
		ms(sum);
	}
}
