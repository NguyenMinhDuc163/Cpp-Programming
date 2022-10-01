#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	struct SinhVien
		{
			string ten,lop,ngaySinh;
			double gpa;
		};
	void nhap(SinhVien &a)
		{
			getline(cin,a.ten);
			getline(cin,a.lop);
			getline(cin,a.ngaySinh);
			if(a.ngaySinh[1] == '/')
				a.ngaySinh = "0" + a.ngaySinh;
			if(a.ngaySinh[4] == '/')
				a.ngaySinh.insert(3,"0");
			cin >> a.gpa;
		}
	void in(SinhVien a)
		{
			cout <<"B20DCCN001 "<< a.ten << ' ' <<a.lop<< ' ' << a.ngaySinh <<' ';
			cout << fixed << setprecision(2) << a.gpa;
		}
    int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}


