#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	int k = 1;
	struct NhanVien
		{
			string ten,gioiTinh,ngaySinh,diaChi,mst,ngayKi, ma;
		};
	void nhap(NhanVien &a)
		{
			if(k == 1)
				cin.ignore();
			getline(cin,a.ten);
			getline(cin,a.gioiTinh);
			getline(cin,a.ngaySinh);
			getline(cin,a.diaChi);
			getline(cin,a.mst);
			getline(cin,a.ngayKi);
			a.ma = to_string(k++);
			while(a.ma.size() < 5)
				{
					a.ma = "0" + a.ma;
				}
		}
	
	void inds(NhanVien a[],int n)
		{
			for(int i = 0 ; i < n;i++)
				{
					cout << a[i].ma <<' ' << a[i].ten <<' ' << a[i].gioiTinh <<' ' << a[i].ngaySinh <<' ' << a[i].diaChi<<' ';
					cout << a[i].mst <<' ' << a[i].ngayKi << endl;
				}
			
		}
    int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}


