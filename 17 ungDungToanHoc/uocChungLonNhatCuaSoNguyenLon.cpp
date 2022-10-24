#include<bits/stdc++.h>
using namespace std ;
#define ll long long
    ll mod(string s,ll n)
        {
            ll r = 0;
            for(int i = 0; i < s.size();i++)
                {
                    int tmp = s[i] - '0';
                    r = r * 10 + tmp;
                    r %= n;
                }
            return r;
        }
    ll ucln(string a,ll b)
        {
            while(b != 0)
                {
                    ll tmp = mod(a,b);
                    a = to_string(b);
                    b = tmp;
                }
            return stoll(a);
        }
    int main()
        {
        	int t;cin >> t;
        	while(t--)
        		{
        			ll a; cin >> a;
		            string s; cin >> s;
		            cout <<ucln(s,a) << endl;
				}
            
            return 0;
        }
