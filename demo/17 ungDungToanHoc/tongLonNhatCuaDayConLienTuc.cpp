#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	//Thuat Toan Kadane 
    int main()
        {
			int t; cin >> t;
			while(t--)
				{
					int n; cin >> n;
					int a[n];
					for(int &x : a)
						cin>>x;
					ll sum1 = 0,sum2 = -1e18;
					for(int i = 0; i < n;i++)
						{
							sum1 += a[i];
							sum2 = max(sum1,sum2); // so sanh s1,s2 neu s2 nho hon thi cap nhat
							if(sum1 < 0) // neu la am thi  co bang 0
								sum1 = 0;
						}
					cout << sum2 << endl;
				}
            return 0;
        }