#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	class DoanhNghiep
		{
			private:
				string ma, ten;
				int soLuong;
			public:
				void nhap()
					{
						getline(cin,ma);
						getline(cin,ten);
						cin >> soLuong;
					}
				void in()
					{
						cout << ma <<' ' << ten <<' ' <<soLuong << endl;
					}
				int getSL()
					{
						return this->soLuong;
					}
				string getMa()	
					{
						return this->ma;
					}
		};
	bool cmp(DoanhNghiep a,DoanhNghiep b)
		{
			if(a.getSL() != b.getSL())
				return a.getSL() > b.getSL();
			else
				return a.getMa() < b.getMa();
		}
    int main()
        {
			int n; cin >> n;
			DoanhNghiep a[n];
			for(int i = 0; i < n;i++)
				{
					cin.ignore();
					a[i].nhap();
				}
			sort(a,a+n,cmp);
			for(DoanhNghiep x: a)
				x.in();
            return 0;
        }


