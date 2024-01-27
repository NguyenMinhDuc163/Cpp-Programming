#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	bool sphenicNum(int n)
		{
			int dem = 0;
			for(int i = 2 ; i <= sqrt(n);i++)
				{
					int cnt = 0;
					if(n % i == 0)
						{
							while(n % i == 0)
								{
									cnt++;
									n/=i;
								}
							if(cnt > 1)
								return false;
							dem++;
						}
				}
			if(n > 1)
				dem++;
			return dem == 3;
		}
    int main()
        {
			int t; cin >> t;
			while(t--)
				{
					int n; cin >> n;
					cout << sphenicNum(n);
					cout << endl;
				}
            return 0;
        }


