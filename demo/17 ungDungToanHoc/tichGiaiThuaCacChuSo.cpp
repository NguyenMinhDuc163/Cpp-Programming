#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	void solve(string s,int n)
		{
			string res = "";
			for(int i = 0; i < n;i++)
				{
					if(s[i] == '4')
						res += "322"; // 4! = 4 * 3! (4 = 2! * 2 !) = 3! * 2! * 2!
					else if(s[i] == '6')
						res += "35";
					else if(s[i] == '8')
						res += "2227";
					else if(s[i] == '9') // 9! = 9 * 8 *7! = 3 * 2 * 3* 2 * 2 * 7! = 3! 3! 2! 7!
						res+="3327";
					else if(s[i] != '1' && s[i] != '0')
						res +=s[i];
				}
			sort(res.begin(),res.end(),greater<char>());
			cout << res << endl;
		}
    int main()
        {
			int t; cin >> t;
			while(t--)
				{
					int n;
					string s;
					cin >> n >> s;
					solve(s,n);
				}
            return 0;
        }