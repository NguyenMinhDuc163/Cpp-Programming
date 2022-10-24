#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	ll f[1005];
	void fibo()
		{
			f[0] = 0,f[1] = 1;
			for(int i = 2; i <= 1001;i++)
				{
					f[i] = f[i - 1] + f[i - 2];
					f[i] %= 1000000007;
				}
		}
    int main()
        {
			int t; cin >> t;
			fibo();
			while(t--)
				{
					int n; cin >> n;
					cout << f[n] << endl;
				}
            return 0;
        }

