#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	ll chiaDu(string s,int n)
		{
			ll r;
			for(int i = 0; i < s.size();i++)
				{
					int tmp = s[i] - '0';
					r = r * 10 +tmp;
					r %= n;
				}
			return r;
		}
    int main()
        {
			int t; cin >> t;
			while(t--)
				{
					string a; 
					ll b,c,r = 0;
					cin >> a >> b >> c;
					for(int i = 0; i < a.size();i++)
						{
							r = r * 10 + b * (a[i] - '0');
							r %= c;
						}
					cout << r << endl;
				}
            return 0;
        }

