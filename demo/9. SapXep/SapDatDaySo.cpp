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
					ll a[n],b[n];
					for(ll &x : a)
						{
							cin >> x;
						}
					for(int i = 0; i < n;i++)
						{
							b[i] = -1;
						}
					sort(a,a+n);
					for(int i = 0 ; i < n;i++)
						{
							for(int j = 0 ; j < n ;j++)
								{
									if(a[j] == i)
										{
											b[i] = i;
											break;
										}
								}
						}
					for(ll x: b)
						cout << x<<' ';
					cout << endl;					
				}
            return 0;
        }


