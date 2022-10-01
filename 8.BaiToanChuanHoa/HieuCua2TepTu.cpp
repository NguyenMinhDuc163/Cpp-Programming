#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long

    int main()
        {
			int t; cin >> t;
			cin.ignore();
			while(t--)
				{
					string s1,s2;
					getline(cin,s1);
					getline(cin,s2);
					set<string> se1,se2;
					stringstream ss1(s1),ss2(s2);
					string token;
					while(ss1 >> token)
						{
							se1.insert(token);
						}
					while(ss2 >> token)
						{
							se2.insert(token);
						}
					for(auto it : se1)
						{
							if(se2.count(it) == 0)
								cout << it <<' ';
						}
					cout << endl;
				}
            return 0;
        }


