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
					for(int i = 0; i < s.size();i++)
						{
							if(!isdigit(s[i]))
								s[i] = ' ';
						}
					stringstream ss(s);
					string token;
					ll sum = 0;
					while(ss >> token)
						{
							sum += stoi(token);
						}
					cout << sum << endl;
				}
            return 0;
        }


