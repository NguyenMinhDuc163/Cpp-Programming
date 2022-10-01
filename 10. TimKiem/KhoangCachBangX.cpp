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
					map<int,int> mp;
					for(int &x:a)
						{
							cin >> x;
							mp[x]++;
						}
					int ok = 0;
					for(int x:a)
						{
							if(mp[k + x])
								{
									ok = 1;
								}
								
						}
					if(ok)
						cout <<"1\n";
					else
						cout <<"-1\n";	
				}
            return 0;
        }


