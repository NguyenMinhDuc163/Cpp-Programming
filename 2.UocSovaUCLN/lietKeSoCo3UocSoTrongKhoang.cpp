#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	bool snt(ll n)
		{
			for(int i = 2; i <= sqrt(n);i++)
				{
					if(n % i == 0)
						return false;
				}
			return n > 1;
		}
    int main()
        {
			int t; cin >> t;
			while(t--)
				{
					ll ans = 0;
					ll l,r; cin >> l >> r;
//					long long a = sqrt(l);
//		            if(a * a != l)
//		                l++;
					for(ll i = l ; i <= sqrt(r) ;i++)
						{
							if(snt(i))
								ans++;
						}
					cout << ans << endl;
				}
            return 0;
        }


