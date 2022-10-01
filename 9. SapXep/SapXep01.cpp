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
						{
							cin >> x;
						}
					sort(a,a+n);
					for(int x: a)
						cout << x <<" ";
					cout << endl;
				}
            return 0;
        }


