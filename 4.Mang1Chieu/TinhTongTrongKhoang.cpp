#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long

    int main()
        {
			int t; cin >> t;
			while(t--)
				{
					int n,q; cin >> n >> q;
					int a[n+1],pref[n+1];
					for(int i = 1; i <= n;i++)
						cin >> a[i];
					for(int i = 1; i <= n;i++)
						pref[i] = pref[i - 1] + a[i];
					while(q--)
						{
							int l,r; cin >> l >> r;
							cout << pref[r] - pref[l - 1] << endl;
						}
				}
            return 0;
        }


