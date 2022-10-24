#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	ll a[1005][1005];
	void toHop()
		{
			for(int i = 0; i <= 1000;i++)
				{
					for(int j = 0; j <= i;j++)
						{
							if(i == j || j == 0)
								a[i][j] = 1;
							else
								{
									a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
								}
							a[i][j] %= 1000000007;
								
						}
				}
		}
    int main()
        {
			int t; cin >> t;
			toHop();
			while(t--)
				{
					int n,r; cin >> n >> r;
					cout << a[n][r] << endl;
				}
            return 0;
        }

