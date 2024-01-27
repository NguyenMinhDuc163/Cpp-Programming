#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long

    int main()
        {
			int t; cin >> t;
			while(t--)
				{
					int n,k; cin >> n >> k;
					int a[n * k];
					for(int i = 0 ; i < n * k ;i++)
						cin >> a[i];
					sort(a,a+n * k);
					for(int x : a)
						cout << x <<' ';
					cout << endl;
				}
            return 0;
        }


