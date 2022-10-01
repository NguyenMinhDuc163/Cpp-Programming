#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	bool check(string s)
		{
			if(s.size() >= 11)
				return false;
			for(int i = 0; i < s.size();i++)
				{
					if(!isdigit(s[i]))
						return false;
				}
			return true;
		}
	ll Stol(string s)
		{
			ll res = 0;
			for(int i = 0; i < s.size();i++)
				{
					res = res * 10 + s[i] - '0';
				}
			return res;
		}
    int main()
        {
			ifstream in;
			in.open("DATA.in");
			ll sum = 0;
			while(!in.eof())
				{
					string s; in >> s;
					if(check(s))
						{
							sum += Stol(s); 
						}
						
				}
			cout << sum << endl;
            return 0;
        }


