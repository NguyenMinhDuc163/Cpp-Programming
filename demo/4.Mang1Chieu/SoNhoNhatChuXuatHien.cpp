#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	int cnt[1000006];
    int main()
        {
        	int t; cin >> t;
        	while(t--)
        		{
        			int n; cin >> n;
					int a[n];
					for(int i = 0; i < n;i++)
						{
							int tmp ; cin >> tmp;
							if(tmp > 0)
								{
									a[i] = tmp;
									cnt[a[i]]++;
								}
						}
					for(int i = 1; i <= 1000006;i++)
						{
							if(cnt[i] == 0)
								{
									cout << i << endl;
									break;
								}
								
						}
					for(int i = 1; i <= 1000006;i++)
						{
							cnt[i] = 0;
						}
				}
		
            return 0;
        }


