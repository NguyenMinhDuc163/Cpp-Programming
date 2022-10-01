#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long

    int main()
        {
			int n; cin >> n;
			int a[n][n],b[n*n], k =0;
			for(int i = 0; i < n;i++)
				{
					for(int j = 0; j < n;j++)
						cin >> a[i][j];
				}
			for(int i = 0; i < n;i++)
				{
					for(int j = 0; j < n;j++)
						b[k++] = a[i][j];
				}	
			sort(b,b+k);
			k = 0;
			int h1 = 0,h2 = n - 1, c1 = 0, c2 = n-1,ans[n][n];
			while(k <= n * n - 1)
				{
					for(int i = c1; i <= c2;i++)
						ans[h1][i] = b[k++];
					h1++;
					for(int i = h1; i <= h2;i++)
						ans[i][c2] = b[k++];
					c2--;
					for(int i = c2; i >=c1;i--)
						ans[h2][i] = b[k++];
					h2--;
					for(int i = h2; i >= h1;i--)
						ans[i][c1] = b[k++];
					c1++;
				}
			for(int i = 0; i < n;i++)
				{
					for(int j = 0; j < n;j++)
						cout << ans[i][j] <<' ';
					cout << endl;
				}
            return 0;
        }


