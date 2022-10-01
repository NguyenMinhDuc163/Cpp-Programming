#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long

    int main()
        {
            string s,ans = ""; 
            vector<string> v,v2;
            while(getline(cin,s))
                {
                    for(int i = 0; i < s.size();i++)
                        {
                            if(s[i] != '.' && s[i] != '?' && s[i] != '!')
                                {
                                    ans += s[i];                               
                                }
                            else
                                {
                                    ans += ' ';
                                    v.push_back(ans);
                                    ans = "";
                                }
                        }
                }
            for(string x : v)
                {
                	stringstream ss(x);
                	string token;
                	int ok = 0;
                	while(ss >> token)
                		{
                			for(int i = 0; i < token.size() ;i++)
                				{
                					if(ok == 0)
		                				{
		                					token[0] = toupper(token[0]);
		                					ok++;
										}
									else
										token[i] = tolower(token[i]);	
								}
                				
                			cout << token <<' ';
						}
					cout << endl;
				}
            return 0;
        }


