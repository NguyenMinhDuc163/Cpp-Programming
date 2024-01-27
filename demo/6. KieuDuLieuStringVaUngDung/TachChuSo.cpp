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
					int ans = 0;
					for(int i = 0; i < s.size();i++)
						{
							if(isdigit(s[i]))
								ans += s[i] - '0';
							else
								mp[s[i]]++;
						}
					for(auto it : mp)
						{
							for(int i = 0; i < it.second;i++)
								cout << it.first;
						}
					cout << ans << endl;
				}
            return 0;
        }


