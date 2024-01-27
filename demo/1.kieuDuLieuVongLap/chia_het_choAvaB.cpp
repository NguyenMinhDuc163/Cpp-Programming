#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long

    int main()
        {
			int t; cin >> t;
			while(t--)
				{
					int m,n,a,b; cin >> m >> n >> a >> b;
					ll c = a / __gcd(a,b) * b,cnt1 = 0,cnt2 = 0,cnt3 = 0;
					for(int i = m; i <= n ;i++)
						{
							if(i % a == 0)
								cnt1++;
							else if(i % b == 0)
								cnt2++;
							else if(i % c == 0)
								cnt3++;
						}
					cout << cnt1 + cnt2 - cnt3 << endl;
				}
            return 0;
        }


