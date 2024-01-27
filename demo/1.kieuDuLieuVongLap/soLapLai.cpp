#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long

    int main()
        {
			int t; cin >> t;
			while(t--)
				{
					ll a,x,y; cin >> a >> x >> y;
					ll gcd = __gcd(x,y);
					for(int i = 0 ; i < gcd;i++)
						{
							cout << a ;
						}
					cout << endl;
				}
            return 0;
        }


