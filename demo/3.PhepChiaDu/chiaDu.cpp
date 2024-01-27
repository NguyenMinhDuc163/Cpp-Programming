#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long

	
    int main()
        {
        	int t; cin >> t;
        	while(t--)
        		{
        			int a, m, ok = 0; cin >> a >> m; 
        			for(int i = 0 ; i < m ;i++)
        				{
        					if((i * a) % m == 1)
	        					{
	        						cout << i << endl;
	        						ok = 1;
	        						break;
								}
						}
					if(ok == 0)
					cout <<"-1\n";
				}
            return 0;
        }



