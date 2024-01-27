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
			int q; cin >> q;
			while(q--)
				{
					int m,n; cin >> m >> n;
					cout <<"DANH SACH DOANH NGHIEP NHAN TU " << m << " DEN " << n << " SINH VIEN:\n";
					for(DoanhNghiep x: a)
						{
							if(x.getSL() >= m && x.getSL() <= n)
								x.in();
						}
				}
			;
            return 0;
        }


