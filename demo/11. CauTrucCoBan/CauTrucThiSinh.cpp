#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	struct ThiSinh
		{
			string ten,ngaySinh;
			double d1,d2,d3;
		};
	void nhap(ThiSinh &a)
		{
			getline(cin,a.ten);
			getline(cin,a.ngaySinh);
			cin >> a.d1 >> a.d2 >> a.d3;
		}
	void in(ThiSinh a)
		{
			cout << a.ten <<' ' << a.ngaySinh <<' ';
			cout << fixed << setprecision(1) << (a.d1 + a.d2 + a.d3 );
		}
    int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}


