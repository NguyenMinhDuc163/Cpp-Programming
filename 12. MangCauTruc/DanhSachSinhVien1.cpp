#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	struct SinhVien
		{
			string ma, ten, lop, ngaySinh;
			double gpa;
		};
	void nhap(SinhVien a[],int n)
		{
			for(int i = 0; i < n;i++)	
				{
					cin.ignore();
					getline(cin,a[i].ten);
					getline(cin,a[i].lop);
					getline(cin,a[i].ngaySinh);
					if(a[i].ngaySinh[1] == '/')
						a[i].ngaySinh = '0' + a[i].ngaySinh;
					if(a[i].ngaySinh[4] == '/')
						a[i].ngaySinh.insert(3,"0");
					cin >> a[i].gpa;
					a[i].ma = to_string(i + 1);
					while(a[i].ma.size() < 3)
						a[i].ma = "0" + a[i].ma;
					a[i].ma = "B20DCCN" +a[i].ma;
				}
		}
	void in(SinhVien a[],int n)
		{
			for(int i = 0; i < n;i++)
				{
					cout << a[i].ma <<' ' << a[i].ten <<' ' << a[i].lop <<' ' << a[i].ngaySinh <<' ';
					cout << fixed << setprecision(2) << a[i].gpa << endl;
				}
		}
    int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}


