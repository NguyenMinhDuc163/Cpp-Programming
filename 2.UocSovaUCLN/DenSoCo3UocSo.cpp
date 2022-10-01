#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	
	bool snt(ll n)
		{
			for(int i = 2 ; i <=sqrt(n);i++)
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
					for(int i = 2 ; i <= sqrt(n);i++)
						{
							if(snt(i))
								cnt++;
						}
					cout << cnt << endl;
				}
            return 0;
        }


