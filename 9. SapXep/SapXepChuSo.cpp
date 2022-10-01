#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	
    int main()
        {
			int t; cin >> t;
			while(t--)
				{
					int n; cin >> n;
					cin.ignore();
					string s; getline(cin,s);
					set<char> se;
					for(int i = 0 ; i < s.size();i++)
						{
							se.insert(s[i]);
						}		
					for(auto x : se)
						{
							if(x != ' ')
								cout << x <<' ';
						}
						
					cout << endl;
				}
            return 0;
        }


