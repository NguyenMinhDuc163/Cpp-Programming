#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	struct toaDo
		{
			double x,y,z;
			
			void nhap()
				{
					cin >> x >> y >> z;
				}
		};
	toaDo tichCoHuong(toaDo a,toaDo b)
		{
			toaDo ans;
			ans.x = a.y * b.z - a.z* b.y;
			ans.y = a.z * b.x - a.x * b.z;
			ans.z = a.x * b.y - a.y * b.x;
			return ans;
		}
	int tichVoHuong(toaDo a,toaDo b)
		{
			int ans = 0;
			ans = a.x * b.x + a.y * b.y + a.z * b.z;
			return ans;
		}
	bool check(toaDo a,toaDo b,toaDo c,toaDo d)
		{
			toaDo AB,AC,AD;
			AB.x = b.x - a.x; AB.y = b.y - a.y; AB.z = b.z - a.z; 
			AC.x = c.x - a.x; AC.y = c.y - a.y; AC.z = c.z - a.z; 
			AD.x = d.x - a.x; AD.y = d.y - a.y; AD.z = d.z - a.z; 
			toaDo tmp = tichCoHuong(AB,AC);
			if(tichVoHuong(tmp,AD) == 0)
				return true;
			else
				return false;
		}
    int main()
        {
			int t; cin >> t;
			while(t--)
				{
					toaDo a,b,c,d;
					a.nhap();b.nhap();
					c.nhap();d.nhap();
					if(check(a,b,c,d))
						cout <<"YES\n";
					else
						cout <<"NO\n";
				
				}
            return 0;
        }


