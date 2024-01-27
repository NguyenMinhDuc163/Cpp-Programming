#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
//#define long long long long

	long long lcm(long long a, long long b)
		{
			return a / __gcd(a,b) * b;
		}
    int main()
        {
			int t; cin >> t;
			while(t--)
				{
					long long x,y,z,n; cin >> x >> y >> z >> n;
					long long l = lcm(x,lcm(y,z));
					long long a = pow(10,n - 1) / l; // lay phan nguyen de ra so nho nhat
					long long b = pow(10,n) / l;
					if(a < 1 && b < 1) // truong hop dau or cuoi nho hon l
						{
							cout <<"-1\n";
							continue;
						}
					if(a * l < pow(10,n - 1)) //chua du de den so dau
						{
							a++;
							cout << a * l << endl;
						}
					else
						cout << a * l << endl;
				}
            return 0;
        }


