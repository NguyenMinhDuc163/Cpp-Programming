#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long

    int main()
        {
        			int n,dem = 0; cin >> n ;
					int a[n][n] = {0};
					for(int i =0 ; i < n ;i++)
						{
							int one = 0,zero= 0;
							for(int j = 0; j < 3 ;j++)
								{
									cin >> a[i][j];
									if(a[i][j] == 0)
										zero++;
									else
										one++;
								}
							if(one > zero)
								dem++;
						}
					cout << dem;
			
            return 0;
        }



