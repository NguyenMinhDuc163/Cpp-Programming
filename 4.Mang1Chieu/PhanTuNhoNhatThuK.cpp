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
        			int a[n];
        			for(int i = 0; i < n;i++)
        				{
        					cin >> a[i];
						}
					sort(a,a+n);
					cout << a[k-1]<< endl;
				}
            return 0;
        }



