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
			ifstream in1,in2;
			in1.open("DATA1.in"); in2.open("DATA2.in");
			set<string> se;
			map<string,int> mp;
			string s;
			while(in1 >> s)
				{
					chuanHoa(s);
					se.insert(s);
					mp[s] = 1;
				}
			while(in2 >> s)
				{
					chuanHoa(s);
					se.insert(s);
					if(mp[s] == 1)
						mp[s] = 2;
				}
			for(string x:se)
				cout << x <<' ';
			cout << endl;
			for(auto it : mp)
				{
					if(it.second == 2)
						cout << it.first <<' ';
				}
			cout << endl;
            return 0;
        }


