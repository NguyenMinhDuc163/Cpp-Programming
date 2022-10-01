#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	
	class SinhVien	
		{
			private:
				string ma,ten,lop,ngaySinh;
				double gpa;
			public:
				void nhap()
					{
						getline(cin,ten);
						getline(cin,lop);
						getline(cin,ngaySinh);
						if(ngaySinh[1] == '/')
							ngaySinh = "0" + ngaySinh;
						if(ngaySinh[4] == '/')
							ngaySinh.insert(3,"0");
						cin >> gpa;
						ma = "B20DCCN001";
					}
				void xuat()
					{
						cout << ma <<' ' << ten << ' ' << lop <<' ' << ngaySinh << ' ';
						cout << fixed << setprecision(2) << gpa;
					}
		};
    int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}


