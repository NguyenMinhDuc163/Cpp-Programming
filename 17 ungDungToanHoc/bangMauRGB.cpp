#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	ll gt[22];
	void giaiThua()
		{
			gt[0] = 1;
			for(int i = 1; i <= 20;i++)
				{
					gt[i] = i * gt[i - 1];
				}
		}
    int main()
        {
			int t; cin >> t;
			giaiThua();
			while(t--)
				{
					int n,r,g,b; cin >> n >> r >> g >> b;
					ll res = 0;
					// dk R + G + b = n && R>= r , G>= g, B >= b
					for(int R = n; R >= r ;R--)
						{
							for(int G = n - R; G >= g ;G--)
								{
									int B = n - R - G; // kt cac dieu kien tren
									if(B >= b)
										res += gt[n] / (gt[R] * gt[G] * gt[B]); // multinomial
								}
						}
					cout << res << endl;
					
				}
            return 0;
        }