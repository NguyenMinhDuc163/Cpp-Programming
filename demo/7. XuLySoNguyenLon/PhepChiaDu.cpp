#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long

    int main()
        {
			int t; cin >> t;
			while(t--)
				{
					string n; cin >> n;
					ll m,r = 0; cin >> m;
					for(int i = 0; i < n.size();i++)
						{
							int tmp = n[i] - '0';
							r = r * 10 + tmp;
							r %= m;
						}
					cout << r << endl;
				}
            return 0;
        }


