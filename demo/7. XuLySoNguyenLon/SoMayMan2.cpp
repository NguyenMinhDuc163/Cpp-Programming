//#include<bits/stdc++.h>
#include<iostream>
using namespace std ;
#define ll long long
    
    int luckyNum(string s)
        {
            ll ans = 0;
            for(int i = 0; i < s.size(); i++)
                ans += s[i] - '0';
            if(ans < 9)
                return 0;
            else if(ans == 9)
                return 1;
            else
                {
                    string tmp = to_string(ans);
                    return luckyNum(tmp);
                }
        }
    int main()
        {
        	int t; cin >> t;
        	while(t--)
        		{
        			string s; cin >> s;
		            if(luckyNum(s))
		                cout <<"1\n";
		            else
		                cout << "0\n";
				}
            
            return 0;
        }


