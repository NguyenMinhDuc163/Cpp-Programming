#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	int count(int n, int p)
		{
			// idea tim p xuat hien bao nhieu lan trong N!
			// nghia la phan tich thua so ngt p trong N!
			int ans = 0;
			for(int i = p; i <= n; i+=p) // chi duyet cac so la boi cua p
				{
					int tmp = i;
					while(tmp % p == 0) // phan tich tmp co bao nhieu p trong do
					// dem xem trong bien tmp co bn lan xuat hien cua p
						{
							ans++;
							tmp/=p;
						}
				}
			return ans;
		}
    int main()
        {
			int t; cin >> t;
			while(t--)
				{
					int n,p; cin >> n >> p;
					cout <<count(n,p) << endl;
				}
            return 0;
        }
