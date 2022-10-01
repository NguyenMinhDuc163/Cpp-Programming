#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long

	ll MOD(string s, ll a)
    	{
    		ll ans = 0;
    		for(int i = 0; i < s.size();i++)
    			{
    				int tmp = s[i] - '0';
    				ans = ans * 10 + tmp;
    				ans %= a;
				}
			return ans;
		}
	ll binaryPow(ll a, ll b, ll c)
		{
			ll ans = 1;
			while(b)
				{
					if(b % 2 == 1)
						{
							ans *= a;
							ans %= c;
						}
					b /= 2;
					a *= a;
					a %= c;
				}
			return ans;
		}	
    int main()
        {
			int t; cin >> t;
			while(t--)
				{
					string a; cin >> a;
					ll b, m; cin >> b >> m;
					ll du = MOD(a,m);
					cout << binaryPow(du,b,m) << endl;
				}
            return 0;
        }


