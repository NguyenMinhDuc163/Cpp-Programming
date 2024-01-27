#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long

    int main()
        {
			int t; cin >> t;
			while(t--)
				{
					string s; cin >> s;
					map<char,int> mp;
					int max_val = 1e-9;
					for(int i = 0; i < s.size();i++)
						{
							mp[s[i]]++;
						}
					for(int i = 0; i < s.size();i++)
						{
							max_val = max(max_val,mp[s[i]]);
						}
					if(max_val - 1 > s.size() - max_val) // so co tan so lon nhat nho hon cach so con lai || lon hon + 1
						cout <<"0\n";
					else
						cout <<"1\n";
				}
            return 0;
        }


