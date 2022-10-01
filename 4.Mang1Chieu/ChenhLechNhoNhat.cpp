#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long

    int main()
        {
			int t; cin >> t;
			while(t--)
				{
					int n ; cin >> n;
					int a[n];
					for(int &x: a)
						cin >> x;
					sort(a,a+n);
					int min_val = 1e9;
					for(int i = 1; i < n;i++)
						{
							min_val = min(min_val,a[i] - a[i - 1]);
						}
					cout << min_val << endl;
				}
            return 0;
        }


