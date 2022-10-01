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
        			int a[n],max_val = 1e-9;
        			for(int i = 0; i < n;i++)
        				{
        					cin >> a[i];
        					max_val = max(max_val,a[i]);
						}
					cout << max_val << endl;
				}
            return 0;
        }



