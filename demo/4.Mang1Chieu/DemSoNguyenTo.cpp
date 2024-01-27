#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long

	bool snt(int n)
		{
			for(int i = 2 ; i <= sqrt(n);i++)
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
					int cnt = 0;
					int a,b; cin >> a >> b;
					for(int i = a ; i <= b ;i++)
						{
							if(snt(i))
								cnt++;
						}
					cout << cnt << endl;
				}
            return 0;
        }


