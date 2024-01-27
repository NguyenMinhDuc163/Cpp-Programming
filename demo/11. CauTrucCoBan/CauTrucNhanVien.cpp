#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	struct NhanVien
		{
			string ten,gioiTinh,ngaySinh,diaChi,MST,ngayKi;
		};
	void nhap(NhanVien &a)
		{
			getline(cin,a.ten);
			getline(cin,a.gioiTinh);
			getline(cin,a.ngaySinh);
			getline(cin,a.diaChi);
			getline(cin,a.MST);
			getline(cin,a.ngayKi);
		}
	void in(NhanVien a)
		{
			cout <<"00001 "<< a.ten << ' ' <<a.gioiTinh<< ' ' << a.ngaySinh <<' ';
			cout << a.diaChi <<' ' << a.MST <<' ' << a.ngayKi ;
		}
    int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}


