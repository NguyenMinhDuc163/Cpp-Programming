#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	bool checkTang(string s)
		{
			for(int i = 1; i < s.size();i++)
				{
					if(s[i - 1] >= s[i])
						return false;
				}
			return true;
		}
	bool checkBang1(string s)
		{
				for(int i = 1; i < s.size();i++)
					{
						if(s[i - 1] != s[i])
							return false;
					}
				return true;
		}
	bool checkBang2(string s)
		{
				for(int i = 1; i < s.size();i++)
					{
						if(i < 3)
							{
								if(s[i] != s[i - 1])
									return false;
							}
						else
							{
								if(s[3] != s[4])
									return false;
							}
					}
				return true;
		}
	bool checkLocPhat(string s)
		{
			for(int i = 0; i < s.size();i++)
				{
					if(s[i] != '6' && s[i] != '8')
						return false;
				}
			return true;
		}
    int main()
        {
			int t; cin >> t;
			cin.ignore();
			while(t--)
				{
					string s; getline(cin,s);
					stringstream ss(s);
					string token,ans;
					while(getline(ss,token,'-'))
						{
						}
					for(int i = 0; i < token.size();i++)
						{
							if(token[i] != '.')
								ans += token[i];
						}
					if(checkBang1(ans) || checkBang2(ans) || checkLocPhat(ans) || checkTang(ans))
						cout <<"YES\n";
					else
						cout << "NO\n";
				}
            return 0;
        }


