#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	void chuanHoa(string &s)
		{
			s[0] = toupper(s[0]);
			for(int i = 1 ; i < s.size();i++)
				{
					s[i] = tolower(s[i]);
				}
		}
	void chuanHoa2(string &s)
		{
			for(int i = 0 ; i < s.size(); i++)
				{
					s[i] = toupper(s[i]);
				}
		}
    int main()
        {
			string s; getline(cin, s);
			chuanHoa(s);
			stringstream ss(s);
			string token;
			string a[100];
			int index =0;
			while(ss >> token)
				{
					chuanHoa(token);
					a[index++] = token;
				}
			for(int i = 0; i < index - 1 ;i++)
				{
					cout << a[i];
					if(i != index - 2)
						cout <<' ';
				}
			chuanHoa2(a[index - 1]);
			cout <<", " << a[index - 1];
            return 0;
        }


