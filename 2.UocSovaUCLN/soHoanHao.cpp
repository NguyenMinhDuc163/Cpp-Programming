#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	
	bool snt(ll n)
		{
			for(int i = 2; i <= sqrt(n);i++)
				{
					if(n % i == 0)
						return false;
				}
			return true;
		}
	bool soHoanHao(ll n)
		{
			for(int i = 0; i < 32;i++)
				{
					ll tmp = (int)pow(2,i) - 1, ans;
					if(snt(tmp))
						{
							ans = tmp * pow(2,i - 1);
							if(ans == n)
								return true;
						}
				}
			return false;
		}
    int main()
        {
			int t; cin >> t;
			while(t--)
				{
					ll n; cin >> n;
					cout <<soHoanHao(n) << endl;
				}
            return 0;
        }


