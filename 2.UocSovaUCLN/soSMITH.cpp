#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	bool snt(int n)
		{
			for(int i =2 ; i <= sqrt(n) ;i++)
				{
					if(n % i == 0)
						return false;
				}
			return n > 1;
		}
	int tongSo(int n)
		{
			int sum = 0;
			while(n != 0)
				{
					sum += n % 10;
					n /= 10;
				}
			return sum;
		}
	ll phanTich(int n)
		{
			int sum = 0;
			for(int i = 2; i <= sqrt(n);i++)
				{
					if( n % i == 0)
						{
							while(n % i == 0)
								{
									sum += tongSo(i);
									n/=i;
								}
						}
				}
			if(n > 1)
				sum += tongSo(n);
			return sum;
		}
    int main()
        {
			int t; cin >> t;
			while(t--)
				{
					int n; cin >> n;
					if(!snt(n)  && tongSo(n) == phanTich(n))
						cout <<"YES\n";
					else
						cout <<"NO\n";
				}
            return 0;
        }
