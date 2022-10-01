#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	
    int main()
        {
			int t; cin >> t;
			while(t--)
				{
					int c = 0 ,l = 0, n = 0;
					char kt =' ';
					while(kt != '\n')
						{
							int tmp; cin >> tmp;
							n++;
							if(tmp % 2 == 0)
								c++;
							else
								l++;
							kt = getchar();
						}
					if((n % 2 == 0 && c > l) || (n % 2 == 1 && c < l))
						cout <<"YES\n";
					else
						cout <<"NO\n";
				}
            return 0;
        }


