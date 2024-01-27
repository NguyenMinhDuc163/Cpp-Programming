#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	bool div11(string s)
		{
			ll c = 0, l = 0;
			for(int i = 0; i < s.size() ; i++)
				{
					if(i % 2 == 0)
						{
							c += s[i] - '0';
						}
					else
						{
							l += s[i] - '0';
						}
				}
			return abs(c - l) % 11 == 0;
		}
    int main()
        {
        	int t; cin >> t;
        	while(t--)
        		{
        			string s; cin >> s;
					cout <<div11(s) << endl;        				
				}
			
            return 0;
        }


