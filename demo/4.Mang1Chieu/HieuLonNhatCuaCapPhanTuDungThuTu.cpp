#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long

    int main()
        {
			int t; cin >> t;
			while(t--)
				{
					int n; cin >> n;
					int a[n];
					for(int &x : a)
						cin >> x;
					int min_val = a[0], res = -1;
					for(int i = 0; i < n;i++)
						{
							if(a[i] > min_val)
								res = max(res,a[i] - min_val);
							else
								min_val = min(min_val,a[i]);
						}
					cout << res << endl;
				}
            return 0;
        }


