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
					int max_val = 1e-9;
					for(int &x: a)
						{
							cin >> x;
							max_val = max(max_val,x);
						}
					cout << max_val << endl;	
					
				}
            return 0;
        }


