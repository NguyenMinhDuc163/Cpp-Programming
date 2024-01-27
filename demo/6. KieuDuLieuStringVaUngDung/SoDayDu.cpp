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
					set<char> se;
					int ok = 0;
					for(int i = 0;  i < s.size();i++)
						{
							if(isdigit(s[i]))
								se.insert(s[i]);
							if(s[0] == '0' || !isdigit(s[i]))
								ok = 1;
						}
					if(ok == 1)
						cout <<"INVALID\n";
					else if(se.size() == 10)
						cout <<"YES\n";
					else
						cout <<"NO\n";
				}
            return 0;
        }


