#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	int k = 1;
	class NhanVien
		{
			private:
				string ma,ten,gioiTinh,ngaySinh,diaChi,MST,ngayKi;
			public:
				friend istream& operator >>(istream &in, NhanVien &x)
					{
						if(k == 1)
							cin.ignore();
						getline(in,x.ten);
						getline(in,x.gioiTinh);
						getline(in,x.ngaySinh);
						getline(in,x.diaChi);
						getline(in,x.MST);
						getline(in,x.ngayKi);
						x.ma = to_string(k++);
						while(x.ma.size() < 5)
							x.ma = "0" + x.ma;
						return in;
					} 
				friend ostream& operator << (ostream &out,NhanVien x)
					{
						out << x.ma <<' ' <<x.ten <<' ' <<x.gioiTinh <<' ' <<x.ngaySinh <<' ' ;
						out <<x.diaChi <<' ' <<x.MST <<' ' <<x.ngayKi << endl;
						return out;
					}
		};
    int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}


