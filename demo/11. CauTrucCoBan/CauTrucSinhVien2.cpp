#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long

	struct SinhVien
		{
			string ten,lop,ngaySinh,ma;
			double gpa;
		};
		void nhapThongTinSV(SinhVien &a)
				{
					getline(cin,a.ten);
					cin >> a.lop >> a.ngaySinh; // do cach nhau dau tab nen dung cin
					if(a.ngaySinh[1] == '/')
						a.ngaySinh = "0" + a.ngaySinh;
					if(a.ngaySinh[4] == '/')
						a.ngaySinh.insert(3,"0");
					cin >> a.gpa;
					a.ma = "N20DCCN001";
				}
			void inThongTinSV(SinhVien a)
				{
					cout << a.ma <<' ' << a.ten <<' ' << a.lop << ' ' << a.ngaySinh <<' ';
					cout << fixed << setprecision(2) << a.gpa;
				}
    int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}


