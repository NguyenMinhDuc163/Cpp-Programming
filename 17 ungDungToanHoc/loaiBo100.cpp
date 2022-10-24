#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	void xoa(string s)
		{
			int ans = 0;
			if(s == "")
				{
					cout <<"" << endl;
					return;
				}
			for(int i = 0; i < s.size() - 2 ;i++)
				{
					if(s[i] == '1' && s[i+1] == '0' && s[i+2] == '0')
						{
							ans+=3;
							s.erase(i,3);
							i = -1;
						}
				}
			cout << ans << endl;
		}
    int main()
        {
			int t; cin >> t;
			while(t--)
				{
					string s; cin >> s;
					xoa(s);
				}
            return 0;
        }

