#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	struct PhanSo
		{
			ll tu,mau;
		};
	void nhap(PhanSo &a)
		{
			cin >> a.tu >> a.mau;
		}
	void in(PhanSo a)
		{
			cout << a.tu <<'/' << a.mau;
		}
	PhanSo tong(PhanSo a,PhanSo b)
		{
			ll mauChung = a.mau / __gcd(a.mau,b.mau) * b.mau;
			a.tu = mauChung / a.mau * a.tu + mauChung /b.mau * b.tu;
			a.mau = mauChung;
			ll l = __gcd(a.tu,a.mau);
			a.tu /= l;
			a.mau /= l;
			return a;
		}
    int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}


