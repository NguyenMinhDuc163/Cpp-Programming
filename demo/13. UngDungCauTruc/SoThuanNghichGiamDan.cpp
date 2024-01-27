#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
    bool ThuanNghich(string s)
        {
            string a = s;
            reverse(s.begin(),s.end());
            return a == s;
        }
    bool cmp(string a,string b)
        {
            if(a.size() != b.size())
                return a.size() > b.size();
            else
                return a > b;
        }
    int main()
        {
            string s;
            vector<string> v;
            map<string,int> mp;
            while(getline(cin,s))
                {
                    stringstream ss(s);
                    string token;
                    while(ss >> token)
                        {
                            if(ThuanNghich(token) && token.size() > 1)
                                {
                                    mp[token]++;
                                    v.push_back(token);
                                }
                            
                        }
                }
            sort(v.begin(),v.end(),cmp);
            for(int i = 0; i < v.size();i++)
                {
                    if(mp[v[i]] != 0)
                        {
                            cout << v[i] <<' ' << mp[v[i]] << endl;
                            mp[v[i]] = 0;
                        }
                        
                }
            return 0;
        }


