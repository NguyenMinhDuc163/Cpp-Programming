#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long

    int main()
        {
			ifstream in;
			in.open("DATA.in");
			int k = 0,n,m;
			map<int,int> mp;
			while(!in.eof())
				{
					if(k == 0)
						{
							in >> n >> m;
							k = 1;
						}
					else 
						{
							int a; in >> a;
							if(k <= n)
								{
									mp[a] = 1;
									k++;
								}
								
							else
								{
									if(mp[a] == 1)
										mp[a] = 2;
								}
						}
				}
			for(auto it : mp)
				{
					if(it.second == 2)
						cout << it.first <<' ';
				}
			in.close();
            return 0;
        }
