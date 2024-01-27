#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	int phanTich(int n)
		{
			if(n == 1)
				return 1;
			for(int i = 2 ; i <= sqrt(n);i++)
				{
					if(n % i == 0)
						return i;
				}
			if(n > 1) // truong hop la snt
				return n;
		}
    int main()
        {
			int t; cin >> t;
			while(t--)
				{
					int n; cin >> n;
					for(int i = 1; i <= n;i++)
						cout <<phanTich(i) <<' ';
					cout << endl;
				}
            return 0;
        }



