#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	
	class NhanVien
		{
			private:
				string ten,gioiTinh,ngaySinh,diaChi,mst,ngayKi,ma;
			public:
				
				void nhap()
					{
						getline(cin,ten);
						getline(cin,gioiTinh);
						getline(cin,ngaySinh);
						getline(cin,diaChi);
						getline(cin,mst);
						getline(cin,ngayKi);
						ma = "00001";
					}
				void xuat()
					{
						cout << ma <<' ' << ten <<' ' <<gioiTinh <<' ' <<ngaySinh<<' ';
						cout << diaChi <<' ' << mst <<' ' << ngayKi;
					}
		};
    int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}


