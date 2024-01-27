#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long

    int main()
        {
			int t; cin >> t;
			while(t--)
				{
					string s,tmp = ""; cin >> s;
					for(int i = 0; i < s.size();i++)
						{
							if(isdigit(s[i]))
								{
									tmp += s[i];
								}
							else
								{
									tmp +=' ';
								}
						}
					stringstream ss(tmp);
					string token;
					ll max_val = 1e-9;
					while(ss >> token)
						{
							max_val = max(max_val,stoll(token));
						}
					cout << max_val << endl;
				}
            return 0;
        }



