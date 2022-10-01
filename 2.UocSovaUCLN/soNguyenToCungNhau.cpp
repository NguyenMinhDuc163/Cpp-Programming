#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long

	bool snt(int n)
		{
			for(int i = 2 ; i <= sqrt(n);i++)
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
					int cnt = 0;
					int n; cin >> n;
					for(int i = 1 ; i <= n ;i++)
						{
							if(__gcd(n,i) == 1)
								cnt++;
						}
					if(snt(cnt))
						cout <<"1\n";
					else
						cout <<"0\n";
				}
            return 0;
        }


