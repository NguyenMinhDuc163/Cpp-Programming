#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long

    int main()
        {
			int t; cin >> t;
			while(t--)
				{
					int n,m; cin >> n >> m;
					int b[n * m + 10],a[n + 10][m + 10];
					for(int  i = 0 ; i < n ;i++)
						{
							for(int j = 0 ; j < m ;j++)
								cin >> a[i][j];
						}
					int h1 = 0,h2 = n - 1,c1 = 0,c2 = m-1,k = 0;
					while(k  <=  n * m - 1)
						{
							for(int i = c1; i <= c2 ;i++)
								b[k++] = a[h1][i] ;
							h1++;
							for(int i = h1; i <= h2 ;i++)
								b[k++] = a[i][c2] ;
							c2--;
							for(int i = c2 ; i >= c1 ;i--)
								 b[k++]= a[h2][i];
							h2--;
							for(int i = h2; i >= h1 ;i--)
								 b[k++]= a[i][c1];
							c1++;
						}
					for(int  i = 0; i < n * m;i++)
						{
							cout << b[i] <<' ';
						}
					cout << endl;
				}
            return 0;
        }


