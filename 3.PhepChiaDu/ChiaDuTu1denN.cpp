#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long

    int main()
        {
			int t; cin >> t;
			while(t--)
				{
					ll n, k; cin >> n >> k;
					ll a = n / k, x =  k - 1; // day la so cky chia het, lap lai theo chu ki k -1
					ll b = n % k ; // day la so chu ki con du
					ll sum ;
					sum = (k - 1) * k / 2 * a + b * (b + 1) / 2; // ct tong 1 day 
					cout << sum << endl;
				}
            return 0;
        }



