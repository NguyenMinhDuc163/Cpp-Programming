#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	
    int main()
        {
			int t; cin >> t;
			while(t--)
				{
					int n,k; cin >> n >> k;
					int a[n], cnt = 0;
					for(int i = 0 ; i < n;i++)
						{
							cin >> a[i];
							if(a[i] == k)
								cnt++;
						}
					if(cnt != 0)
						cout << cnt <<endl;
					else
						cout <<"-1\n";
				}
            return 0;
        }


