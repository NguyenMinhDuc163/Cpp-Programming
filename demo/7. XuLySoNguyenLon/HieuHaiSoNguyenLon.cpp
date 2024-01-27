#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
#define max 1000000007
	void sub(string a,string b)
		{
			while(a.size() < b.size())	a = "0" + a;
			while(b.size() < a.size())	b = "0" + b;
			if(a < b) // truong hop cucng size nhung b > a
				swap(a,b);
			int nho = 0;
			string ans  = "";
			for(int i = a.size() - 1 ;i >= 0;i--)
				{
					int tmp = (a[i] - '0') - (b[i] - '0') - nho;
					if(tmp < 0)
						{
							ans = (char)(10 + tmp +'0') + ans;
							nho = 1;
						}
					else
						{
							ans = char(tmp + '0') + ans;
							nho = 0;
						}
				}
			cout <<ans << endl;
		}
    int main()
        {
			int t; cin >> t;
			while(t--)
				{
					string a,b; cin >> a >> b;
					sub(a,b);
				}
            return 0;
        }


