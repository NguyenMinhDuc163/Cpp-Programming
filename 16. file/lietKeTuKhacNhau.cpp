#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	void chuanHoa(string &s)
		{
			for(int i = 0; i < s.size();i++)
				s[i] = tolower(s[i]);
		}
    int main()
        {
			ifstream in;
			in.open("VANBAN.in");
			string s;
			set<string> se;
			while(!in.eof())
				{
					in >> s;
					chuanHoa(s);
					se.insert(s);
				}
			for(string it : se)
				cout << it << endl;
            return 0;
        }


