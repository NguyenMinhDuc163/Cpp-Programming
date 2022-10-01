#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	void chuanHoa(string &s)
		{
			for(int i = 0 ; i < s.size();i++)
				s[i] = tolower(s[i]);
		}
	bool ThuanNghich(string s)
		{
			string a = s;
			reverse(s.begin(),s.end());
			return a == s;
		}
    int main()
        {
			int t; cin >> t;
			while(t--)
				{
					map<string,string> mp = {{"abc","2"},{"def","3"},{"ghi","4"},{"jkl","5"},{"mno","6"},{"pqrs","7"},{"tuv","8"},{"wxyz","9"}};
					string s; cin >> s;
					chuanHoa(s);
					string ans = "";
					for(int i = 0; i < s.size();i++)
						{
							for(auto it: mp)
								{
									if(it.first.find(s[i]) != string::npos)
										{
											ans += it.second;
											break;
										}
										
								}
						}
					if(ThuanNghich(ans))
						cout <<"YES\n";
					else
						cout <<"NO\n" ;
				}
            return 0;
        }


