#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long

    int main()
        {
			int t; cin >> t;
			while(t--)
				{
					int n,d; cin >> n >> d;
					int a[n],b[n];
					for(int i = 0; i < d;i++)
						cin >> a[i];
					for(int i = d; i < n;i++)
						{
							cin >> b[i];
							cout << b[i] <<' ';
						}
					for(int i = 0; i < d;i++)
						cout << a[i] <<' ';
					cout << endl;	
				}
            return 0;
        }


