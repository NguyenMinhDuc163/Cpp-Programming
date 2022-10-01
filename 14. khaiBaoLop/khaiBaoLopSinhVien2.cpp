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
				friend istream& operator >> (istream& in, SinhVien &x)
					{
						getline(in,x.ten);
						getline(in,x.lop);
						getline(in,x.ngaySinh);
						if(x.ngaySinh[1] == '/')
							x.ngaySinh = "0" + x.ngaySinh;
						if(x.ngaySinh[4] == '/')
							x.ngaySinh.insert(3,"0");
						in >> x.gpa;
						x.ma = "B20DCCN001";
						return in;
					}
			friend ostream& operator << (ostream& out ,SinhVien x)
				{
					out << x.ma << ' ' << x.ten <<' ' << x.lop <<' ' << x.ngaySinh <<' ';
					out << fixed << setprecision(2) << x.gpa;
					return out;
				}
		};
    int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}


