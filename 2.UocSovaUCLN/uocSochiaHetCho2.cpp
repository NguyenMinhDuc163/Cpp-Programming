#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long

    int main()
        {
			int t; cin >> t;
			while(t--)
				{
					int n,cnt = 0; cin >> n;
					for(int i = 1; i <= sqrt(n);i++)
						{
							if(n % i == 0)
								{
									if(i % 2 == 0)
										cnt++;
									if(i != n /i && (n / i) % 2 == 0)
										cnt++;
								}
						}
					cout << cnt <<endl;
				}
            return 0;
        }


