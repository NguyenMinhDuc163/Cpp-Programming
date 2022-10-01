#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	struct Time
		{
			int h,m,s;
			void nhap()
				{
					cin >> h >> m >> s;
				}
			void in()
				{
					cout <<h << ' ' << m << ' ' << s << endl;
				}
		};
	bool cmp (Time a,Time b)
		{
			int t1 = a.h*3600 + a.m * 60 + a.s;
			int t2 = b.h*3600 + b.m * 60 + b.s;
			return t1 < t2;
		}
    int main()
        {
			int n; cin >> n;
			Time a[n];
			for(int i = 0; i < n;i++)
				{
					a[i].nhap();
				}
			sort(a,a+n,cmp);
			for(int i = 0; i < n;i++)
				{
					a[i].in();
				}
            return 0;
        }


