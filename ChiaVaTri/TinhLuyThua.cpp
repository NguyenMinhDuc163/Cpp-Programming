#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long

    int main()
        {
			int t; cin >> t;
			while(t--)
				{
					ll x,y,p; cin >> x >> y >> p;
					ll res = 1;
					for(int i = 1; i <= y ;i++)
						{
							res *= x;
							res %= p;
						}
					cout << res<< endl;	
				}
            return 0;
        }

