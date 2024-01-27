#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
    int main()
        {
			ifstream in;
			in.open("DATA.in");
			map<int,int> mp;
			int n;
			while(in >> n)
				{
					mp[n]++;
				}
			for(auto it : mp)
				{
						cout << it.first <<' ' << it.second << endl;
				}
				
            return 0;
        }


