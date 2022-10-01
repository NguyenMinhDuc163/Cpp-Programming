#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	ll max_val(string a, string b)
		{
			for(char &x: a)
				{
					if(x == '5')
						x = '6';
				}
			for(char &x: b)
				{
					if(x == '5')
						x = '6';
				}
			return stoll(a) + stoll(b);
		}
	ll min_val(string a,string b)
		{
			for(char &x: a)
				{
					if(x == '6')
						x = '5';
				}
			for(char &x: b)
				{
					if(x == '6')
						x = '5';
				}
			return stoll(a) + stoll(b);
		}
    int main()
        {
			int t; cin >> t;
			while(t--)
				{
					string a,b; cin >> a >> b;
					cout <<min_val(a,b) <<' ' <<max_val(a,b) << endl;
				}
            return 0; 
        }


