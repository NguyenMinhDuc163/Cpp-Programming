#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	bool checkTang(ll n)
		{
			int max = n % 10;
			n/=10;
			while(n != 0)
				{
					int tmp = n % 10;
					if(tmp >= max)
						return false;
					max = tmp;
					n /= 10;
				}
			return true;
		}
		
	bool checkGiam(ll n)
		{
			int min = n % 10;
			n/=10;
			while(n != 0)
				{
					int tmp = n % 10;
					if(tmp <= min)
						return false;
					min = tmp;
					n /= 10;
				}
			return true;
		}
	bool snt(ll n)
		{
			for(int i = 2; i <= sqrt(n);i++)
				{
					if(n % i == 0)
						return false;
				}
			return n > 1;
		}
    int main()
        {
			int t; cin >> t;
			while(t--)
				{
					ll n,cnt = 0; cin >> n;
					for(int i = pow(10,n - 1); i < pow(10,n);i++)
						{
							if((checkGiam(i) || checkTang(i)) && snt(i))
								cnt++;
						}
					cout << cnt << endl;
				}
            return 0;
        }


