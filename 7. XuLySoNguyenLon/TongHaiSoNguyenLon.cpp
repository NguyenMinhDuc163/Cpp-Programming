#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
#define max 1000000007
    int main()
        {
			int t; cin >> t;
			while(t--)
				{
					string a,b; cin >> a >> b;
					while(a.size() < b.size())	a = "0" + a;
					while(b.size() < a.size())	b = "0" + b;
					int nho = 0;
					string ans = "";
					for(int i = a.size() - 1; i >= 0;i--)
						{
							int tmp = a[i] - '0' + b[i] - '0' + nho;
							nho = tmp / 10;
							tmp %= 10 ; // phai o sau vi tren lay su dung
							ans = (char)(tmp + '0') + ans;
						}
					if(nho > 0)
						ans = "1" + ans;
					cout << ans << endl;
				}
            return 0;
        }


