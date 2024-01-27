#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long

    int main()
        {
			ifstream in;
			ofstream out;
			in.open("PTIT.in");
			out.open("PTIT.out",ios::trunc);
			if(in.is_open())
				{
					string s;
					while(getline(in,s))
						{
							out << s << endl;
						}
				}
			
			in.close();
			out.close();
            return 0;
        }



