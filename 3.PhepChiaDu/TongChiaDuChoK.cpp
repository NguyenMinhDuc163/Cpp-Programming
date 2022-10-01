#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long

    int main()
        {
			int t; cin >> t;
			while(t--)
				{
					ll n, k, sum = 0; cin >> n >> k;
					sum = (k - 1) * k / 2 * (n / k) + (n % k) * (n % k + 1) / 2; 
					if(sum == k)
						cout <<"1\n";
					else
						cout <<"0\n";
				}
            return 0;
        }



