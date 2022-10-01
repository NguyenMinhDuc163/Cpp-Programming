#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	void chuanHoa(string &s)
		{
			for(int i = 0 ; i < s.size();i++)
				{
					s[i] = tolower(s[i]);
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
					a[index++] = token;
				}
			cout << a[index - 1];
			for(int i = 0; i < index - 1 ;i++)
				{
					cout << a[i][0];
				}
			cout <<"@ptit.edu.vn";
            return 0;
        }


