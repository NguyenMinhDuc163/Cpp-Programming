#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
#define max 1000000007
    int main()
        {
			int t; cin >> t;
			while(t--)
				{
					int n, k; cin >> n >>k;
					int a[n];
					for(int &x : a)
						cin >> x;
					ll res = 0, lt = 1;
					for(int i = n - 1;i >= 0;i--)
						{
							res += a[i] * lt;
							res %= max;
							lt *= k;
							lt %= max;
						}
					cout << res << endl;
				}
            return 0;
        }


