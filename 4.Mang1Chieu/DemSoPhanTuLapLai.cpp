#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
    int main()
        {
        	int t; cin >> t;
        	while(t--)
        		{
        			int n,dem =0; cin >> n;
					map<int,int> mp;
					for(int i = 0; i < n ;i++)
						{
							int tmp; cin >> tmp;
							mp[tmp]++;
						}
					for(auto it: mp)
						{
							if(it.second > 1)
								dem += it.second;
						}
					cout << dem << endl;
				}
			
            return 0;
        }



